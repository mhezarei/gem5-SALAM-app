# gem5-SALAM-app
Testing some applications on gem5-SALAM

## Execution Instructions

This repo removes the need for keeping applications inside `gem5-SALAM` repo. The instructions for running these applications, however, remain straightforward. Each application resides inside its own folder (e.g., `signal_stream`). Inside each application folder, we typically have the following structure:

[comment]: <> (# TODO: add deeper information)
```python
configs/                       # top-level configs
hw/                            # accelerators codebase
sw/                            # host (e.g., x86) codebase
config.yml                     # accelerator configuration
defines.h                      # top-level definitions
run.sh                         # running script
<app name>_clstr_hw_defines.h  # holds the addresses according to config.yml
```

There are a few things you need to check for each application, which I will explain in the next steps:
1. Dataset
2. Accelerator configuration and development
3. Setting up the host
4. System specifics

### Prerequisites

1. Clone the [custom `gem5-SALAM` repo](https://github.com/mhezarei/gem5-SALAM) (note that the normal version doesn't support remote applications).
2. Build `gem5-SALAM`
3. Set `$M5_PATH` to `/path/to/gem5-SALAM`.
4. Set `$M5_APP_PATH` to `/path/to/gem5-SALAM-app` (this repo).

### Step 1: Dataset


