package com.codingeek;

import org.junit.jupiter.api.Test;

import java.time.Duration;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashSet;

import static org.junit.jupiter.api.Assertions.*;

public class AssertionsTest {
  @Test
  void testAssertEqualAndNotEquals() {
    var expected = "codingeek";
    var actual = "codingeek";

    assertEquals(expected, actual);

    assertNotEquals("Some random string", actual);
  }

  @Test
  void testAssertArrayEqual() {
    var expected = new char[] {'c', 'o', 'd', 'i', 'n', 'g', 'e', 'e', 'k'};
    var actual = "codingeek".toCharArray();

    assertArrayEquals(expected, actual);
  }

  @Test
  void testAssertArrayEqualForNullValues() {
    var expected = new char[] {'c', 'o', 'd', 'i', 'n', 'g', 'e', 'e', 'k'};
    var actual = "codingeek".toCharArray();

    assertArrayEquals(expected, actual);
  }

  @Test
  void testAssertNullAndNotNull() {
    String nullObject = null;
    var nonNullObject = "codingeek";

    assertNull(nullObject);
    assertNotNull(nonNullObject);
  }

  @Test
  void testAssertSameAndNotSame() {
    var expectedObject = new Object();
    var sameObject = expectedObject;

    assertSame(expectedObject, sameObject);

    var notSameObject = new Object();
    assertNotSame(sameObject, notSameObject);
  }

  @Test
  void testAssertTrueAndFalse() {
    assertTrue(2 < 3);
    assertFalse(2 > 3);
  }

  @Test
  void testAssertIterableEquals() {
    var listIterable = new ArrayList<>(Arrays.asList("a", "b", "c"));
    var setIterable = new LinkedHashSet<>(Arrays.asList("a", "b", "c"));

    assertIterableEquals(listIterable, setIterable);

    assertIterableEquals(null, null);
  }

  @Test
  void testAssertLinesMatch() {
    var expectedList = new ArrayList<>(Arrays.asList("a", "\\d+", "[a-z]*"));
    var actualList = new ArrayList<>(Arrays.asList("a", "100", "codingeek"));

    assertLinesMatch(expectedList, actualList);
    assertLinesMatch(expectedList.stream(), actualList.stream());
  }

  @Test
  void testAssertAll() {
    assertAll(
        "Sitename",
        () -> assertTrue("Codingeek".startsWith("C")),
        () -> assertTrue("Codingeek".endsWith("k")),
        () -> assertEquals(9, "Codingeek".length()));
  }

  @Test
  void testAssertTimeoutNotExceeded() {
    // Does not fail as the method returns in less than a second
    assertTimeout(Duration.ofSeconds(1), () -> "Codingeek.com");
  }

  @Test
  void testAssertTimeoutFailure() {
    // Does fails as the method does not returns in less than a second
    // Total running time for this method is a bit more than 2000 milliseconds
    assertTimeout(Duration.ofSeconds(1), () -> Thread.sleep(2000));
  }

  @Test
  void timeoutExceededWithPreemptiveTermination() {
    // The following assertion fails with an error message similar to:
    // execution timed out after 10 ms
    assertTimeoutPreemptively(
        Duration.ofMillis(10),
        () -> {
          // Simulate task that takes more than 10 ms.
          Thread.sleep(5000);
        });
  }

  @Test
  void testAssertThrows() {
    Throwable throwable =
        assertThrows(
            ArithmeticException.class,
            () -> {
              var number = 10 / 0;
            });
    assertEquals("/ by zero", throwable.getMessage());
  }

  @Test
  void testAssertDoesNotThrow() {
    assertDoesNotThrow(() -> {});
  }

  @Test
  void testFail() {
    var returnValue = (int) (Math.random() * 100);
    if (returnValue % 2 == 0) {
      fail("This value should be odd");
    }
  }
}
