#include "Laptop.h"
#include <string>

Laptop* Laptop::create() {
  return new Laptop();
}

std::string Laptop::describe() {
  return "This is a laptop";
}

std::string Laptop::ensamble()
{
  return "Ensambling components";
}
std::string Laptop::configure()
{
  return "Configuring laptop";
}
std::string Laptop::install()
{
  return "Installing software";
}
std::string Laptop::pack()
{
  return "Packing laptop";
}
