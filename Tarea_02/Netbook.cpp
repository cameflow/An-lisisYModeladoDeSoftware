#include <string>
#include "Netbook.h"

Netbook* Netbook::create() {
  return new Netbook();
}


std::string Netbook::describe() {
  return "This is a netbook";
}

std::string Netbook::ensamble()
{
  return "Ensambling components";
}
std::string Netbook::configure()
{
  return "Configuring netbook";
}
std::string Netbook::install()
{
  return "Installing software";
}
std::string Netbook::pack()
{
  return "Packing netbook";
}
