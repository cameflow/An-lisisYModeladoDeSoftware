#include <string>
#include "AbstractComputer.h"
class Tablet : public AbstractComputer {
 private:
  Tablet() {}
 public:
  static Tablet* create();
  std::string describe();
  std::string ensamble();
  std::string configure();
  std::string install();
  std::string pack();
};
