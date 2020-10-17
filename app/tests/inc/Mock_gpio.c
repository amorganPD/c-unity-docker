#ifndef _MOCK_GPIO_C_
#define _MOCK_GPIO_C_

#include "gpio.h"

static bool pinStatus = true;

bool gpio_getPinState(uint32_t Pin) { 
  return pinStatus;
}

#endif // _MOCK_GPIO_C_
