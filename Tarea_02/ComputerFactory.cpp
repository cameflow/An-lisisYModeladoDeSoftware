#include <string>
#include "ComputerFactory.h"
#include "Desktop.h"
#include "Tablet.h"
#include "Laptop.h"
#include "Netbook.h"

AbstractComputer* ComputerFactory::create(std::string type)
{
  if (type == "Desktop")
  {
    return Desktop::create();
  }
  else if (type == "Laptop")
  {
    return Laptop::create();
  }
  else if (type == "Tablet")
  {
    return Tablet::create();
  }
  else if (type == "Netbook")
  {
    return Netbook::create();
  }
  throw std::runtime_error("There's a type of computer that isn't implemented in the factory");
}

ComputerFactory* ComputerFactory::instance = nullptr;

ComputerFactory* ComputerFactory::getInstance()
{
  if (ComputerFactory::instance == nullptr)
  {
    ComputerFactory::instance = new ComputerFactory();
  }
  return ComputerFactory::instance;
}
