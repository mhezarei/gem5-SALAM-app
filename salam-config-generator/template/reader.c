#include "../defines.h"

#define DATA_TYPE {data_type}

void top(ADDR addr_from, ADDR stream_to) {{
  for (int i = 0; i < NUM_CLICK_EVENTS; i++) {{
    Record r = ((Record *)addr_from)[i];
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_1};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_2};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_3};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_4};
    asm volatile("HASHEMI");
  }}
  *((DATA_TYPE *)stream_to) = (DATA_TYPE)END_TOKEN;
  return;
}}
