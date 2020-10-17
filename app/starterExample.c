#include <stdint.h>
#include <stdbool.h>

#include "gpio.h"

uint32_t addExample(uint16_t a, uint16_t b) {
  return (uint32_t)(a + b);
}

bool getPINstatus(void) {
  return gpio_getPinState(1);
}
