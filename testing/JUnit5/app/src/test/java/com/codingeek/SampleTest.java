package com.codingeek;

import org.junit.jupiter.api.*;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;

class SampleTest {
  private final int expected = 10;
  private final int actual = 5 * 2;

  @BeforeAll
  static void runOnceBeforeAllTests() {
    System.out.println("@BeforeAll executed");
  }

  @BeforeEach
  void runBeforeEveryTest() {
    System.out.println("@BeforeEach executed");
  }

  @Test
  void testMethod() {
    System.out.println("=====@Test executed====");
    Assertions.assertEquals(expected, actual);
  }

  @Disabled
  @Test
  void testDisabledMethod() {
    System.out.println("=====Disabled @Test executed====");
    Assertions.assertEquals(expected, actual);
  }

  @ParameterizedTest
  @ValueSource(ints = {1, 2, 3})
  void testParameterizedMethod(int number) {
    System.out.println("=====@ParameterizedTest executed==== value "+number);
    Assertions.assertTrue(number > 0);
  }

  @AfterEach
  void runAfterEveryTest() {
    System.out.println("@AfterEach executed");
  }

  @AfterAll
  static void runOnceAfterAllTests() {
    System.out.println("@AfterAll executed");
  }
}
