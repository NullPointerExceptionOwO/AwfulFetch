#include <cstring>
#include <data/hostname/hostname.hpp>
#include <stdexcept>
#include <string>
#include <trace.hpp>
#include <unistd.h>

namespace Data::HostName {

void
getHostName(char* aHostName, const size_t aSize)
{
  if (gethostname(aHostName, aSize) != 0) {
    throw std::runtime_error("Error getting hostname: " +
                             std::string(strerror(errno)));
  }
  AWFULFETCH_TRACE("Hostname: " << aHostName);
}

} // namespace Data::HostName
