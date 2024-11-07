#include <cmath>
#include <data/ram/ram.hpp>
#include <trace.hpp>
#include <unistd.h>

namespace Data::Ram {

unsigned
getPhysicalRamSizeMB(void)
{
  long pages    = sysconf(_SC_PHYS_PAGES);
  long pageSize = sysconf(_SC_PAGE_SIZE);
  AWFULFETCH_TRACE("pages:" << pages << ' ' << "pageSize:" << pageSize);
  return (pages * pageSize) / std::pow(1024, 2);
}

} // namespace Data::Ram
