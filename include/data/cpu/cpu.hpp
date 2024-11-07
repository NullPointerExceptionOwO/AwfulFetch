#ifndef AWFULFETCH_DATA_CPU_CPU_HPP_
#define AWFULFETCH_DATA_CPU_CPU_HPP_

#include <string>

namespace Data::Cpu {

typedef struct CPUData
{
  std::string modelName         = "Unknown";
  unsigned    peakClockSpeedMHz = 0;
  unsigned    coresCount        = 0;
} CPUData;

void
detectProcessor(CPUData* aCpu);

std::string
getProcessorSpecificationString(void);

} // namespace Data::Cpu

#endif /* AWFULFETCH_DATA_CPU_CPU_HPP_ */
