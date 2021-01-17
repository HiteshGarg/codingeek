package com.codingeek;

import org.junit.jupiter.api.Nested;
import org.junit.jupiter.api.Test;

class NestedAnnotationTest {

  @Test
  void outermostClassTest() {}

  class MissingNestedAnnotation {
    @Test
    void thisShouldNeverExecute() {}
  }

  @Nested
  class WithNestedAnnotation {

    @Test
    void nestedClassTest() {}
  }
}
