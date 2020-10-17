#ifndef _TEST_MAIN_H_
#define _TEST_MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#include "unity.h"

extern void setUp(void);
extern void tearDown(void);

extern void starterExample_TestRunner(void);

extern int test_main(void);

#endif // _TEST_MAIN_H_
