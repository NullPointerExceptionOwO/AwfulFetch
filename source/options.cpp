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
  while ((option = getopt(aArgc, aArgv, "COA")) != -1) {
    switch (option) {
      case 'C':
        AWFULFETCH_TRACE("currentConfig.useColors=false");
        currentConfig.useColors = false;
        break;
      case 'O':
        AWFULFETCH_TRACE("currentConfig.onlyRandomArt=true");
        currentConfig.onlyRandomArt = true;
        break;
      case 'A':
        AWFULFETCH_TRACE("currentConfig.anonymize=true");
        currentConfig.anonymize = true;
        break;
      case '?':
        break;
      default:
        std::cerr << "getopt(1) returned character code: " << option << '\n';
    }
  }
  return currentConfig;
}

} // namespace Options
