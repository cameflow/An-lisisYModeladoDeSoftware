#include <string>
#include "AbstractComputer.h"

class Laptop : public AbstractComputer {
 private:
  Laptop() {}
 public:
  static Laptop* create();
  std::string describe();
  std::string ensamble();
  std::string configure();
  std::string install();
  std::string pack();
};
