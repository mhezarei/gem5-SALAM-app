#include "../defines.h"

#define DATA_TYPE {data_type}

void top(ADDR stream_from, {out_streams}) {{
  while (1) {{
    // initialize record
    DATA_TYPE {field_1}, {field_2}, {field_3}, {field_4};

    // read parts
    {field_1} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if ({field_1} == END_TOKEN) {{
{end_stream_statements}
      return;
    }}
    {field_2} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    {field_3} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    {field_4} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    ADDR stream_to = {out_stream_logic};

    *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_1};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_2};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_3};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE){field_4};
  }}

  return;
}}
