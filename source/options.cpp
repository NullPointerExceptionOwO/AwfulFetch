#include <iostream>
#include <options.hpp>
#include <trace.hpp>
#include <unistd.h>

namespace Options {
OptionsSetup
generateOptionsSetup(int aArgc, char* aArgv[])
{
  OptionsSetup currentConfig;
  int          option;
  while ((option = getopt(aArgc, aArgv, "C")) != -1) {
    switch (option) {
      case 'C':
        AWFULFETCH_TRACE("currentConfig.useColors=false");
        currentConfig.useColors = false;
        break;
      case '?':
        break;
      default:
        std::cerr << "getopt(1) returned character code: " << option << '\n';
    }
  }
  return currentConfig;
}
}
