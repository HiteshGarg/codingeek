package com.codingeek;

import org.junit.jupiter.api.*;

class NestedAnnotationLifecycleTest {

  @BeforeAll
  static void setUpBeforeAll() {
    System.out.println("OuterClass - Setup @BeforeAll");
  }

  @AfterAll
  static void tearDownAfterAll() {
    System.out.println("OuterClass - Tear down @AfterAll");
  }

  @BeforeEach
  void setUp() {
    System.out.println("OuterClass - Setup");
  }

  @AfterEach
  void tearDown() {
    System.out.println("OuterClass - TearDown");
  }

  @TestInstance(TestInstance.Lifecycle.PER_CLASS)
  @Nested
  class WithLifecycleCalls {

    @BeforeAll
    void setUpBeforeAll() {
      System.out.println("InnerClass - Setup @BeforeAll");
    }

    @AfterAll
    void tearDownAfterAll() {
      System.out.println("InnerClass - Tear down @AfterAll");
    }

    @BeforeEach
    void setUp() {
      System.out.println("InnerClass - Setup");
    }

    @BeforeEach
    void setUp2() {
      System.out.println("InnerClass - Setup");
    }

    @AfterEach
    void tearDown() {
      System.out.println("InnerClass - TearDown");
    }

    @Test
    void nestedClassTest() {}
  }
}
