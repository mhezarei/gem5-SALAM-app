NUM_CALC_UNITS = 128
NUM_PE_UNITS = 16
WM_DEBUG = "True"
PE_DEBUG = "False"
CALC_DEBUG = "False"
SPM_SIZE = 128

s = f"""---
acc_cluster:
  - Name: ts_clstr
  - DMA:
    - Name: dma
      MaxReqSize: 1024
      BufferSize: 1024
      PIOMaster: LocalBus
      Type: NonCoherent
      InterruptNum: 95
      Debug: False
  
  - Accelerator:
    - Name: top
      IrPath: hw/top.ll
      ConfigPath: hw/top.ini
      PIOSize: 128
      InterruptNum: 68
      PIOMaster: LocalBus
      LocalSlaves: LocalBus
      Debug: False

  - WindowManager:
    - Name: wm
      PIOSize: 128
      PIOMaster: LocalBus
      Debug: {WM_DEBUG}
      MemoryPorts: {NUM_CALC_UNITS}
    - Var:
      - Name: spm_wm
        Type: SPM
        Size: {SPM_SIZE}
        Ports: 10
"""

for i in range(1, NUM_CALC_UNITS + 1):
    s += f"""    - Var:
      - Name: stream_wm_calc{i}
        Type: Stream
        StreamSize: 8
        BufferSize: 80
        InCon: wm
        OutCon: calc{i}
"""

for i in range(1, NUM_PE_UNITS + 1):
    s += f"""    - Var:
      - Name: stream_wm_pe{i}
        Type: Stream
        StreamSize: 8
        BufferSize: 80
        InCon: wm
        OutCon: pe{i}
"""

for i in range(1, NUM_CALC_UNITS + 1):
    s += f"""  - Accelerator:
    - Name: calc{i}
      IrPath: hw/calc.ll
      ConfigPath: hw/calc.ini
      PIOSize: 128
      InterruptNum: 68
      PIOMaster: LocalBus
      LocalSlaves: LocalBus
      Debug: {CALC_DEBUG}
    - Var:
      - Name: stream_calc{i}_wm
        Type: Stream
        StreamSize: 8
        BufferSize: 80
        InCon: calc{i}
        OutCon: wm

"""

for i in range(1, NUM_PE_UNITS + 1):
    s += f"""  - Accelerator:
    - Name: pe{i}
      IrPath: hw/pe{i}.ll
      ConfigPath: hw/pe{i}.ini
      PIOSize: 128
      InterruptNum: 68
      PIOMaster: LocalBus
      LocalSlaves: LocalBus
      Debug: {PE_DEBUG}
    - Var:
      - Name: stream_pe{i}_wm
        Type: Stream
        StreamSize: 8
        BufferSize: 80
        InCon: pe{i}
        OutCon: wm

"""

s += """hw_config:
  top:
"""

for i in range(1, NUM_PE_UNITS + 1):
    s += f"""  pe{i}:
"""

for i in range(1, NUM_CALC_UNITS + 1):
    s += f"""  calc{i}:
"""

s += """  wm:
    instructions:
      add:
        functional_unit: 1
        functional_unit_limit: 0
        opcode_num: 13
        runtime_cycles: 0
      addrspacecast:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 50
        runtime_cycles: 1
      alloca:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 31
        runtime_cycles: 0
      and_inst:
        functional_unit: 4
        functional_unit_limit: 0
        opcode_num: 28
        runtime_cycles: 1
      ashr:
        functional_unit: 3
        functional_unit_limit: 0
        opcode_num: 27
        runtime_cycles: 1
      bitcast:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 49
        runtime_cycles: 0
      br:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 2
        runtime_cycles: 0
      call:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 56
        runtime_cycles: 0
      fadd:
        functional_unit: 6
        functional_unit_limit: 0
        opcode_num: 14
        runtime_cycles: 5
      fcmp:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 54
        runtime_cycles: 1
      fdiv:
        functional_unit: 10
        functional_unit_limit: 0
        opcode_num: 21
        runtime_cycles: 16
      fence:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 35
        runtime_cycles: 0
      fmul:
        functional_unit: 9
        functional_unit_limit: 0
        opcode_num: 18
        runtime_cycles: 4
      fpext:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 46
        runtime_cycles: 0
      fptosi:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 42
        runtime_cycles: 0
      fptoui:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 41
        runtime_cycles: 0
      fptrunc:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 45
        runtime_cycles: 0
      frem:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 24
        runtime_cycles: 16
      fsub:
        functional_unit: 6
        functional_unit_limit: 0
        opcode_num: 16
        runtime_cycles: 5
      gep:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 34
        runtime_cycles: 0
      icmp:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 53
        runtime_cycles: 0
      indirectbr:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 4
        runtime_cycles: 0
      inttoptr:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 48
        runtime_cycles: 0
      invoke:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 5
        runtime_cycles: 0
      landingpad:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 66
        runtime_cycles: 0
      load:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 32
        runtime_cycles: 0
      lshr:
        functional_unit: 3
        functional_unit_limit: 0
        opcode_num: 26
        runtime_cycles: 1
      mul:
        functional_unit: 2
        functional_unit_limit: 0
        opcode_num: 17
        runtime_cycles: 1
      or_inst:
        functional_unit: 4
        functional_unit_limit: 0
        opcode_num: 29
        runtime_cycles: 1
      phi:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 55
        runtime_cycles: 0
      ptrtoint:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 47
        runtime_cycles: 0
      resume:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 6
        runtime_cycles: 0
      ret:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 1
        runtime_cycles: 0
      sdiv:
        functional_unit: 2
        functional_unit_limit: 0
        opcode_num: 20
        runtime_cycles: 1
      select:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 57
        runtime_cycles: 0
      sext:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 40
        runtime_cycles: 0
      shl:
        functional_unit: 3
        functional_unit_limit: 0
        opcode_num: 25
        runtime_cycles: 1
      srem:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 23
        runtime_cycles: 1
      store:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 33
        runtime_cycles: 0
      sub:
        functional_unit: 1
        functional_unit_limit: 0
        opcode_num: 15
        runtime_cycles: 1
      switch_inst:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 3
        runtime_cycles: 0
      trunc:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 38
        runtime_cycles: 0
      udiv:
        functional_unit: 2
        functional_unit_limit: 0
        opcode_num: 19
        runtime_cycles: 1
      uitofp:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 43
        runtime_cycles: 0
      unreachable:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 7
        runtime_cycles: 0
      urem:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 22
        runtime_cycles: 1
      vaarg:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 60
        runtime_cycles: 0
      xor_inst:
        functional_unit: 4
        functional_unit_limit: 0
        opcode_num: 30
        runtime_cycles: 1
      zext:
        functional_unit: 0
        functional_unit_limit: 0
        opcode_num: 39
        runtime_cycles: 0

"""

print(s)
