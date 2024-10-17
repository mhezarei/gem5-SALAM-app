#include "../defines.h"

#define DATA_TYPE {data_type}

void top(ADDR addr_from, ADDR stream_to) {{
  for (int i = 0; i < NUM_CLICK_EVENTS; i++) {{
    Record r = clicks[i];
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_1};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_2};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_3};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_4};
  }}
  *((DATA_TYPE *)stream_to) = (DATA_TYPE)END_TOKEN;
  return;
}}
