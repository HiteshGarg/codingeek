package com.codingeek;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class AssertExceptionTest {

  @Test
  void assertNullPointerException() {
    var message = "test exception";
    var expectedException =
        assertThrows(
            RuntimeException.class,
            () -> {
              throw new NullPointerException(message);
            });

    assertEquals(message, expectedException.getMessage());
  }

  @Test
  void assertThrowsArithmeticException() {
    var expectedException =
        assertThrows(
            ArithmeticException.class,
            () -> {
              var number = 1 / 0;
            });

    assertEquals("/ by zero", expectedException.getMessage());
  }
}
