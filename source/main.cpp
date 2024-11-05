#include <options.hpp>

int
main(int aArgc, char* aArgv[])
{
  Options::OptionsSetup currentConfig =
    Options::generateOptionsSetup(aArgc, aArgv);
  return 0;
}
