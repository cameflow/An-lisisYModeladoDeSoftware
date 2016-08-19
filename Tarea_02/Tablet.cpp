#include <string>
#include "Tablet.h"

Tablet* Tablet::create() {
  return new Tablet();
}

std::string Tablet::describe() {
  return "This is a tablet";
}

std::string Tablet::ensamble()
{
  return "Ensambling components";
}
std::string Tablet::configure()
{
  return "Configuring tablet";
}
std::string Tablet::install()
{
  return "Installing software";
}
std::string Tablet::pack()
{
  return "Packing tablet";
}
