In this repository I have added few of the examples of traces that have generated using RISC-V Tracer which works with spike.
So, non-vectorized folder contains the trace for a simple C++ code which have been compiled using RISC-V toolchain without using vectorization.
Vectorized folder contains six different sub-folders which contains similar C++ code with some modifications in each due to which different instructions are produced in assembly code.
Code1 sub-folder contains intructions like "vlse, vfmadd, vse, vsetvli".
Code2 sub-folder contains intructions like "vid, vand, vmv, vmsne".
Code3 sub-folder contains intructions like "vfmv, vfmacc, vmv1r, vmerge, vfadd".
Code4 sub-folder contains intructions like "vsext,vsll, vluxei".
Code5 sub-folder contains intructions like "vsext,vsll, vsuxei".
Code5 sub-folder contains intructions like "vlseg3e32, vfredusum".
