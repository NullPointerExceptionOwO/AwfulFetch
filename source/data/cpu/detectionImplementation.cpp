/// @file source/data/cpu/detectionImplementation.cpp
/// @date November 2024
/// This file overloads Data::Cpu::detectProcessor() function

#include <data/cpu/cpu.hpp>
#include <trace.hpp>

namespace Data::Cpu {

#if __linux___
#include <sys/sysinfo.h>

void
detectProcessor(CPUData* aCpu)
{
  AWFULFETCH_TRACE("__linux__");
}
#elif __OpenBSD__

void
detectProcessor(CPUData* aCpu)
{
  AWAWFULFETCH_TRACE("__OpenBSD__");
}

#else
#include <iostream>
void
detectProcessor(CPUData* aCpu)
{
  std::cerr << "Cannot detect CPU: No valid implementation has been found\n";
}
#endif

} // namespace Data::Cpu
