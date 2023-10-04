#pragma once

#include <iosfwd>
#include <string>

#include <libxxx/export.hpp>

namespace xxx
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBXXX_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
