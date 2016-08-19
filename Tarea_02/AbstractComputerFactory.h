#include <string>
#include "AbstractComputer.h"

class AbstractComputerFactory {
 public:
  virtual AbstractComputer* create(std::string type) = 0;
};
