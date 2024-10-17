#include "../defines.h"

#define DATA_TYPE {data_type}

void top(ADDR stream_from, ADDR stream_to) {{
  while (1) {{
    // initialize record
    Record r = (struct Record){{{init_record}}};

    // read parts
    r.{field_1} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    if (r.{field_1} == END_TOKEN) {{
      *((DATA_TYPE *)stream_to) = END_TOKEN;
      return;
    }}
    r.{field_2} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    r.{field_3} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));
    r.{field_4} = (DATA_TYPE)(*((DATA_TYPE *)stream_from));

    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_1};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_2};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE){predicate};
    *((DATA_TYPE *)stream_to) = (DATA_TYPE)r.{field_4};
  }}

  return;
}}
