#include <string>
#include "AbstractComputer.h"

class Netbook : public AbstractComputer {
 private:
  Netbook() {}
 public:
  static Netbook* create();
  std::string describe();
  std::string ensamble();
  std::string configure();
  std::string install();
  std::string pack();
};
