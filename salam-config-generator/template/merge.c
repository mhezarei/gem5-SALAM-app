#include "../defines.h"

#define DATA_TYPE {data_type}

void top({in_streams}, ADDR stream_to) {{
  int done_0 = 0;
  int done_1 = 0;
  int done_2 = 0;
  while (1) {{
    if (done_0 == 1 && done_1 == 1 && done_2 == 1) {{
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }}
    asm volatile("HASHEMI");

    for (int i = 0; i < {num_input_streams}; i++) {{
      if (i == 0 && done_0 == 1) {{
        continue;
      }} else if (i == 1 && done_1 == 1) {{
        continue;
      }} else if (i == 2 && done_2 == 1)
        continue;

      DATA_TYPE {field_1}, {field_2}, {field_3}, {field_4};

      ADDR stream_from = {in_stream_logic};
      asm volatile("HASHEMI");

      // does the selected stream have any data?
      uint8_t stream_from_status = *((uint8_t *)(stream_from + 64));
      asm volatile("HASHEMI");
      if (stream_from_status == 0)
        continue;
      asm volatile("HASHEMI");

      {field_1} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      if ({field_1} == END_TOKEN) {{
        if (i == 0) {{
          done_0 = 1;
        }} else if (i == 1) {{
          done_1 = 1;
        }} else {{
          done_2 = 1;
        }}
        break;
      }}
      asm volatile("HASHEMI");
      {field_2} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      asm volatile("HASHEMI");
      {field_3} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      asm volatile("HASHEMI");
      {field_4} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      asm volatile("HASHEMI");

      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_1};
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_2};
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_3};
      asm volatile("HASHEMI");
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_4};
    }}
  }}

  return;
}}
