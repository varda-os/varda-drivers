#pragma once
#include <stdint.h>

// Initialise SDIO driver
void sdio_init(void);

// Initialise the SD card
int32_t sdcard_init(void);
