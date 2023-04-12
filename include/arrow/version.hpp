#ifndef ARROW_VERSION_HPP
#define ARROW_VERSION_HPP

#define ARROW_VERSION_MAJOR 0
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 1

#define ARROW_STR_HELPER(x) #x
#define ARROW_STR(x) ARROW_STR_HELPER(x)

#define ARROW_VERSION                                                          \
  (ARROW_STR(ARROW_VERSION_MAJOR) "." ARROW_STR(                               \
      ARROW_VERSION_MINOR) "." ARROW_STR(ARROW_VERSION_PATCH))

#include <string>
std::string getArrowVersion();

#endif // ARROW_VERSION_HPP
