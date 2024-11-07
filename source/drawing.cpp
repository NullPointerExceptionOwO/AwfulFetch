#include <cstring>
#include <data/cpu/cpu.hpp>
#include <data/hostname/hostname.hpp>
#include <data/ram/ram.hpp>
#include <drawing.hpp>
#include <iostream>
#include <options.hpp>
#include <stdexcept>
#include <trace.hpp>
#include <unistd.h>

namespace Drawing {

void
showSummary(Options::OptionsSetup& aOptions)
{
  char     hostName[254];
  unsigned ramSize;

  Data::Cpu::CPUData cpu;
  Data::Cpu::detectProcessor(&cpu);

  if (!aOptions.anonymize) {
    try {
      Data::HostName::getHostName(hostName, sizeof(hostName));
    } catch (const std::runtime_error& context) {
      std::cerr << "Failed to get hostname: " << context.what();
      strcpy(hostName, "Unknown");
      AWFULFETCH_TRACE("hostname is \"Unknown\"");
    }
  } else {
    strcpy(hostName, Constants::kAnonymized);
  }
  ramSize = Data::Ram::getPhysicalRamSizeMB();
  std::cout << "Hostname: " << hostName << '\n';
  std::cout << "RAM: " << ramSize << "MB" << '\n';
}

} // namespace Drawing
