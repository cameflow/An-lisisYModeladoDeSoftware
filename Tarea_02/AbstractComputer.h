#include <string>
class AbstractComputer {
 public:
  virtual std::string describe() = 0;
  virtual std::string ensamble() = 0;
  virtual std::string configure() = 0;
  virtual std::string install() = 0;
  virtual std::string pack() = 0;
};
