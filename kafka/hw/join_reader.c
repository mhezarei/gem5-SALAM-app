#include "../defines.h"

void top(ADDR addr_a, ADDR addr_b, ADDR stream_a, ADDR stream_b) {
  UINT max_size =
      NUM_A_RECORDS >= NUM_B_RECORDS ? NUM_A_RECORDS : NUM_B_RECORDS;
  asm volatile("HASHEMI");
  UINT min_size =
      NUM_A_RECORDS <= NUM_B_RECORDS ? NUM_A_RECORDS : NUM_B_RECORDS;
  asm volatile("HASHEMI");

  for (UINT i = 0; i < max_size; i++) {
    ARecord a_record = ((ARecord *)(addr_a))[i];
    asm volatile("HASHEMI");
    *((uint64_t *)stream_a) = a_record.timestamp;
    asm volatile("HASHEMI");
    *((uint64_t *)stream_a) = a_record.locationID;
    asm volatile("HASHEMI");
    *((uint64_t *)stream_a) = a_record.sensorID;
    asm volatile("HASHEMI");
    *((uint64_t *)stream_a) = a_record.vehicleCount;
    asm volatile("HASHEMI");

    if (i >= min_size)
      continue;
    asm volatile("HASHEMI");

    BRecord b_record = ((BRecord *)(addr_b))[i];
    asm volatile("HASHEMI");
    *((uint64_t *)stream_b) = b_record.timestamp;
    asm volatile("HASHEMI");
    *((uint64_t *)stream_b) = b_record.locationID;
    asm volatile("HASHEMI");
    *((uint64_t *)stream_b) = b_record.temperature;
    asm volatile("HASHEMI");
  }
  *((uint64_t *)stream_a) = 0;
  asm volatile("HASHEMI");
  *((uint64_t *)stream_b) = 0;
  asm volatile("HASHEMI");
}
