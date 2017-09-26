#ifndef CRC32C_H
#define CRC32C_H

#include <cstdint>
#include <cstddef>

uint32_t crc32c(uint32_t crc, const unsigned char *buf, size_t len);
bool crc32c_hw_test();

#endif
