package com.codingeek;

import org.junit.jupiter.api.Tag;
import org.junit.jupiter.api.Tags;
import org.junit.jupiter.api.Test;

import java.time.Duration;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashSet;

import static org.junit.jupiter.api.Assertions.*;

@Tag("tag-on-class")
class TagAnnotaionExampleTest {

  @Tag("slow")
  @Test
  void slowTest() {}

  @Tag("fast")
  @Test
  void fastTest() {}

  @Tag("fast")
  @Tag("slow")
  @Test
  void alwaysRunTest() {}

  @Test
  void testWithoutTag() {}
}
