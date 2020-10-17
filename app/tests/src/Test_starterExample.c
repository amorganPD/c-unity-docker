#include "starterExample.h"

#include "test_main.h"
#include "Mock_gpio.c"

/*** START - Declarations - addExample ***/
void addExample_TestRunner(void);
void test_addExample_try1_1_Expect2(void);

// Tests - addExample
void test_addExample_try1_1_Expect2(void) {
  TEST_ASSERT_EQUAL_UINT32(2, addExample(1, 1));
}

// Test Runner - addExample
void addExample_TestRunner(void) {
  RUN_TEST(test_addExample_try1_1_Expect2);
}
/*** END - addExample ***/

/*** START - Declarations - getPINstatus ***/
void getPINstatus_TestRunner(void);
void test_getPINstatus_tryDependencyMock(void);

// Tests - getPINstatus
void test_getPINstatus_tryDependencyMock(void) {
  TEST_ASSERT(getPINstatus());
}

// Test Runner - getPINstatus
void getPINstatus_TestRunner(void) {
  RUN_TEST(test_getPINstatus_tryDependencyMock);
}
/*** END - getPINstatus ***/

// Add Test Runner in test_main.c
// Add declaration to test_main.h
void starterExample_TestRunner(void) {
  addExample_TestRunner();
  getPINstatus_TestRunner();
}
