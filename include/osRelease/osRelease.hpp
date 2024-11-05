/// @file include/osRelease/osRelease.hpp
/// @date November 2024

#ifndef AWFULFETCH_OSRELEASE_OSRELEASE_HPP_
#define AWFULFETCH_OSRELEASE_OSRELEASE_HPP_

#include <string>

namespace OsRelease {

/// @brief Structure for storing needed information about this system.
typedef struct osRelease
{
  std::string prettyName; //< PRETTY_NAME value
  std::string ansiColor;  //< ANSI_COLOR value
} osRelease;

} // namespace OsRelease

#endif /* AWFULFETCH_OSRELEASE_OSRELEASE_HPP_ */
