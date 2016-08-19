#include <iostream>
#include <string>
#include "ComputerFactory.h"


int main(int argc, char const *argv[]) {
  ComputerFactory* factory = ComputerFactory::getInstance();
  AbstractComputer* l = factory->create("Laptop");
  AbstractComputer* d = factory->create("Desktop");
  AbstractComputer* n = factory->create("Netbook");
  AbstractComputer* t = factory->create("Tablet");
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}
