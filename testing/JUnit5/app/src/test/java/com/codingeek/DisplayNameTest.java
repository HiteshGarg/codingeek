package com.codingeek;

import org.junit.jupiter.api.*;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;

import java.lang.reflect.Method;

@DisplayName("Custom Display Name Test Class")
class DisplayNameTest {

  @Test
  @DisplayName("Custom method name $%^! 👍 👌")
  void displayNameWithSpecialCharsAndEmoji() {}

  @Nested
  @DisplayNameGeneration(DisplayNameGenerator.ReplaceUnderscores.class)
  class Replace_underscores_generation_test {
    @Test
    void should_generate() {}

    @DisplayName("@DisplayName annotation is preferred")
    @Test
    void this_should_not_generate() {}
  }

  @Nested
  @DisplayNameGeneration(DisplayNameGenerator.ReplaceUnderscores.class)
  class A_string_is_valid_replace_underscores {

    @Test
    void if_it_is_not_blank() {}

    @DisplayName("@DisplayName - if it has only numbers or alphabets")
    @ParameterizedTest(name = "{displayName} -> {0} is a valid string")
    @ValueSource(strings = {"a", "1", "a1"})
    void if_it_has_only_number_or_alphabets(String value) {}
  }

  @Nested
  @IndicativeSentencesGeneration(
      separator = " -> ",
      generator = DisplayNameGenerator.ReplaceUnderscores.class)
  class A_string_is_not_valid_indicative_generation {

    @Test
    void if_it_is_blank() {}

    @DisplayName("@DisplayName - if it has special characters")
    @ParameterizedTest(name = "{displayName} -> {0} is not a valid string")
    @ValueSource(strings = {"@", "a$", "a@$"})
    void if_it_has_only_number_or_alphabets(String value) {}
  }

  @Nested
  @DisplayNameGeneration(CamelCaseToStatementGenerator.class)
  class AStringIsValidCustomAnnotation {

    @Test
    void ifItIsNotBlank() {}

    @DisplayName("@DisplayName - if it has only numbers or alphabets")
    @ParameterizedTest(name = "{displayName} -> {0} is a valid string")
    @ValueSource(strings = {"a", "1", "a1"})
    void ifItHasOnlyNumberOrAlphabets(String value) {}
  }

  @Nested
  @IndicativeSentencesGeneration(
      separator = " -> ",
      generator = CamelCaseToStatementGenerator.class)
  class AStringIsNotValidCustomAnnotation {

    @Test
    void ifItIsBlank() {}

    @DisplayName("@DisplayName - if it has special characters")
    @ParameterizedTest(name = "{displayName} -> {0} is not a valid string")
    @ValueSource(strings = {"@", "a$", "a@$"})
    void ifItHasOnlyNumberOrAlphabets(String value) {}
  }

  static class CamelCaseToStatementGenerator extends DisplayNameGenerator.Standard {
    @Override
    public String generateDisplayNameForClass(Class<?> testClass) {
      return camelCaseToSpaceSeparatedStatement(super.generateDisplayNameForClass(testClass));
    }

    @Override
    public String generateDisplayNameForNestedClass(Class<?> nestedClass) {
      return camelCaseToSpaceSeparatedStatement(
          super.generateDisplayNameForNestedClass(nestedClass));
    }

    @Override
    public String generateDisplayNameForMethod(Class<?> testClass, Method testMethod) {
      return this.camelCaseToSpaceSeparatedStatement(testMethod.getName())
          + DisplayNameGenerator.parameterTypesAsString(testMethod);
    }

    String camelCaseToSpaceSeparatedStatement(String camelCase) {
      StringBuilder result = new StringBuilder();
      result.append(camelCase.charAt(0));

      for (int i = 1; i < camelCase.length(); i++) {
        if (Character.isUpperCase(camelCase.charAt(i))) {
          result.append(' ');
          result.append(Character.toLowerCase(camelCase.charAt(i)));
        } else {
          result.append(camelCase.charAt(i));
        }
      }
      return result.toString();
    }
  }
  //
  //  static class IndicativeSentences extends ReplaceCamelCase {
  //    @Override
  //    public String generateDisplayNameForNestedClass(Class<?> nestedClass) {
  //      return super.generateDisplayNameForNestedClass(nestedClass) + "...";
  //    }
  //
  //    @Override
  //    public String generateDisplayNameForMethod(Class<?> testClass, Method testMethod) {
  //      return camelCaseToSpaceSeparatedStatement(testClass.getSimpleName() + " " +
  // testMethod.getName()) + ".";
  //    }
  //  }
}
