#include "starterExample.h"

#include "test_main.h"

/*** START - Declarations - addExample ***/
void addExample_TestRunner(void);
void test_addExample_try1_1_Expect2(void);
void test_addExample_try65536_65536_Expect0(void);

// Tests - addExample
void test_addExample_try1_1_Expect2(void) {
  TEST_ASSERT_EQUAL_UINT32(2, addExample(1, 1));
}
void test_addExample_try65536_65536_Expect0(void) {
  TEST_ASSERT_EQUAL_UINT32(0, addExample(65536, 65536));
}

// Test Runner - addExample
void addExample_TestRunner(void) {
  RUN_TEST(test_addExample_try1_1_Expect2);
  RUN_TEST(test_addExample_try65536_65536_Expect0);
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
