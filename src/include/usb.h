#pragma once
#include <stdint.h>

// Initialise the USB driver
void usb_init(void);

// Write data to USB, using the given endpoint
int32_t usb_write(uint8_t ep, uint32_t size, uint8_t *data);

// Read exactly size bytes from USB, spinning while there isn't enough data to
// fill size bytes
int32_t usb_read_exact(uint8_t ep, uint32_t size, uint8_t *data);

// Read at most size bytes from USB, returning how many bytes were actually read
int32_t usb_read(uint8_t ep, uint32_t size, uint8_t *data);
