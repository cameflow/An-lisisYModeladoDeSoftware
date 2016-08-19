#include <string>
#include "AbstractComputer.h"

class Desktop : public AbstractComputer {
 private:
  Desktop() {}
 public:
  static Desktop * create(); 
  std::string describe();
  std::string ensamble();
  std::string configure();
  std::string install();
  std::string pack();
};
