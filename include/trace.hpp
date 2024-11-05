/// @file include/trace.hpp
/// @date November 2024

#ifndef AWFULFETCH_TRACE_HPP_
#define AWFULFETCH_TRACE_HPP_

#include <iostream>

// TRACE is only usable in debug binaries (make debug).
// Release one gets optimized away.
#ifdef DEBUG
#define AWFULFETCH_TRACE(message)                                           \
  do {                                                                      \
    std::cerr << __FILE__ << ':' << __LINE__ << ":(" << __FUNCTION__ << ')' \
              << " - " << message << "\n";                                  \
  } while (0)
#else
#define AWFULFETCH_TRACE(message) \
  do {                            \
  } while (0)
#endif

#endif /* AWFULFETCH_TRACE_HPP_ */
