/**
  ******************************************************************************
  * @file    test_main.c
  * @author  Anton Morgan - amorgan@prioitydesigns.com
  * @brief   Main entry for units tests
  *
  ******************************************************************************
**/

/* Includes ------------------------------------------------------------------*/
#include "test_main.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}

#ifdef GCCCOMPILE
  int main (void) {
#else
  // Use to run on target hardware
  int test_main (void) {
#endif
    UNITY_BEGIN();

    // Add TestRunners here
    starterExample_TestRunner();

    return UNITY_END();
  }
