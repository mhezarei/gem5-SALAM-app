#include "../defines.h"

#define DATA_TYPE {data_type}

void top({in_streams}, ADDR stream_to) {{
  while (1) {{
    for (int i = 0; i < {num_input_streams}; i++) {{
      DATA_TYPE {field_1}, {field_2}, {field_3}, {field_4};

      ADDR stream_from = {in_stream_logic};

      {field_1} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      if ({field_1} == END_TOKEN) {{
        *((DATA_TYPE *)stream_to) = END_TOKEN;
        return;
      }}
      {field_2} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      {field_3} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
      {field_4} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_1};
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_2};
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_3};
      *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_4};
    }}
  }}

  return;
}}
