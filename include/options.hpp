/// @file include/options.hpp
/// @date November 2024

#ifndef AWFULFETCH_OPTIONS_HPP_
#define AWFULFETCH_OPTIONS_HPP_

namespace Options {

/// @brief Container that stores config for current run
typedef struct OptionsSetup
{
  bool useColors     = true; //< Use colors
  bool anonymize     = false; //< Don't show hostname and username
  bool onlyRandomArt = false; //< Print randomart and quit
} OptionsSetup;

/// @brief Generate OptionsSetup from argc and argv(using getopt(1)).
/// @param[in] int aArgc
/// @param[in] char* aArgv
/// @param[out] Options::OptionsSetup Config, that was generated using getopt
OptionsSetup
generateOptionsSetup(int aArgc, char* aArgv[]);

} // namespace OptionsSetup

#endif /* AWFULFETCH_OPTIONS_HPP_ */
