package com.codingeek;

import org.junit.jupiter.api.DisplayNameGeneration;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.api.Assumptions.*;

@DisplayNameGeneration(DisplayNameTest.CamelCaseToStatementGenerator.class)
class AssumptionsTest {
  @Test
  void testAssumeTrueOnTestEnv() {
    System.setProperty("ENV", "TEST");

    assumeTrue("TEST".equals(System.getProperty("ENV")));

    // Since the condition is true rest of it will get executed
    assertTrue(Math.random() > 0);
  }

  @Test
  void testAssumeTrueOnTestEnvWithFalseConditionWithMessageSupplier() {
    System.setProperty("ENV", "TEST");

    assumeTrue("PRODUCTION".equals(System.getProperty("ENV")), AssumptionsTest::message);

    // Since the condition is false rest of it will NOT get executed
    assertTrue(Math.random() > 0);
  }

  @Test
  void testAssumeFalseWithFalseCondition() {
    System.setProperty("ENV", "PRODUCTION");

    assumeFalse("TEST".equals(System.getProperty("ENV")));

    // Since the condition is false rest of it will get executed
    assertTrue(Math.random() > 0);
  }

  @Test
  void testAssumeFalseWithTrueConditionWithMessageSupplier() {
    System.setProperty("ENV", "PRODUCTION");

    assumeFalse("PRODUCTION".equals(System.getProperty("ENV")), AssumptionsTest::message);

    // Since the condition is false rest of it will get executed
    assertTrue(Math.random() > 0);
  }

  @Test
  void testAssumingThat() {
    System.setProperty("ENV", "CI");

    assumingThat(
        "CI".equals(System.getProperty("ENV")),
        () -> {
          // run the end2end test cases
          System.out.println("Assuming that executable executed");
        });

    // Since the condition is false rest of it will get executed
    assertTrue(Math.random() > 0);
  }

  private static String message() {
    return "TEST Execution Failed :: ";
  }
}
