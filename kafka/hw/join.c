#include "../defines.h"

void top(ADDR stream_a, ADDR stream_b, ADDR stream_ss_req,
         ADDR stream_ss_resp) {
  uint8_t num_ongoing_streams = 2;

  while (1) {
    if (num_ongoing_streams == 0)
      break;
    asm volatile("HASHEMI");

    uint8_t a_stream_status = *((uint8_t *)(stream_a + 64));
    asm volatile("HASHEMI");

    if (a_stream_status >= 8) {
      ARecord a_record = (ARecord){0, 0, 0, 0};
      asm volatile("HASHEMI");

      // read record from stream
      a_record.timestamp = *((uint64_t *)stream_a);
      asm volatile("HASHEMI");

      if (a_record.timestamp == END_TOKEN) {
        num_ongoing_streams--;
        asm volatile("HASHEMI");
        continue;
      }
      asm volatile("HASHEMI");

      a_record.locationID = *((uint64_t *)stream_a);
      asm volatile("HASHEMI");
      a_record.sensorID = *((uint64_t *)stream_a);
      asm volatile("HASHEMI");
      a_record.vehicleCount = *((uint64_t *)stream_a);
      asm volatile("HASHEMI");

      // send the whole record to SS
      *((uint64_t *)stream_ss_req) = A_TOKEN;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = a_record.timestamp;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = a_record.locationID;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = a_record.sensorID;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = a_record.vehicleCount;
      asm volatile("HASHEMI");

      // waiting for SS response
      while (1) {
        uint8_t ss_resp_status = *((uint8_t *)(stream_ss_resp + 64));
        asm volatile("HASHEMI");

        if (ss_resp_status >= 8) {
          BRecord b_record = (BRecord){0, 0, 0};
          asm volatile("HASHEMI");
          b_record.timestamp = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");

          if (b_record.timestamp == END_TOKEN)
            break;
          asm volatile("HASHEMI");

          b_record.locationID = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");
          b_record.temperature = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");
        }
      }
    }

    uint8_t b_stream_status = *((uint8_t *)(stream_b + 64));
    asm volatile("HASHEMI");

    if (b_stream_status >= 8) {
      BRecord b_record = (BRecord){0, 0, 0};
      asm volatile("HASHEMI");

      // read record from stream
      b_record.timestamp = *((uint64_t *)stream_b);
      asm volatile("HASHEMI");

      if (b_record.timestamp == END_TOKEN) {
        num_ongoing_streams--;
        asm volatile("HASHEMI");
        continue;
      }
      asm volatile("HASHEMI");

      b_record.locationID = *((uint64_t *)stream_b);
      asm volatile("HASHEMI");
      b_record.temperature = *((uint64_t *)stream_b);
      asm volatile("HASHEMI");

      // send the whole record to SS
      *((uint64_t *)stream_ss_req) = B_TOKEN;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = b_record.timestamp;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = b_record.locationID;
      asm volatile("HASHEMI");
      *((uint64_t *)stream_ss_req) = b_record.temperature;
      asm volatile("HASHEMI");

      // waiting for SS response
      while (1) {
        uint8_t ss_resp_status = *((uint8_t *)(stream_ss_resp + 64));
        asm volatile("HASHEMI");

        if (ss_resp_status >= 8) {
          ARecord a_record = (ARecord){0, 0, 0, 0};
          asm volatile("HASHEMI");
          a_record.timestamp = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");

          if (a_record.timestamp == END_TOKEN)
            break;
          asm volatile("HASHEMI");

          a_record.locationID = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");
          a_record.sensorID = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");
          a_record.vehicleCount = *((uint64_t *)stream_ss_resp);
          asm volatile("HASHEMI");
        }
      }
    }
  }
}
