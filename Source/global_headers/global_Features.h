
#pragma once

// JIT and CLOOP
#define ENABLE_JIT 0
#define ENABLE_C_LOOP 1

#define ENABLE_DFG_JIT ENABLE_JIT
#define ENABLE_FTL_JIT ENABLE_JIT
#define ENABLE_WEBASSEMBLY ENABLE_FTL_JIT
#define ENABLE_SAMPLING_PROFILER ENABLE_JIT

// Don't change it unless you change asm.rb config too.
#define ENABLE_POISON 0
// ParallelJobs.h
#define ENABLE_THREADING_GENERIC 1
