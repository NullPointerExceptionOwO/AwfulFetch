#include <drawing.hpp>
#include <options.hpp>

int
main(int aArgc, char* aArgv[])
{
  Options::OptionsSetup currentConfig =
    Options::generateOptionsSetup(aArgc, aArgv);
  Drawing::showSummary(currentConfig);
  return 0;
}
