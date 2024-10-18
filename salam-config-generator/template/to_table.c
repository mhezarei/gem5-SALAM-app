#include "../defines.h"

#define DATA_TYPE {data_type}

void top(ADDR stream_from, ADDR table_to) {{
  while (1) {{
    DATA_TYPE {field_1}, {field_2}, {field_3}, {field_4};

    {field_1} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if ({field_1} == END_TOKEN) {{
      *((DATA_TYPE *)table_to) = END_TOKEN;
      return;
    }}
    asm volatile("HASHEMI");
    {field_2} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    {field_3} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    asm volatile("HASHEMI");
    {field_4} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    *((DATA_TYPE *)table_to) = (DATA_TYPE){field_1};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE){field_2};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE){field_3};
    asm volatile("HASHEMI");
    *((DATA_TYPE *)table_to) = (DATA_TYPE){field_4};
  }}

  return;
}}
