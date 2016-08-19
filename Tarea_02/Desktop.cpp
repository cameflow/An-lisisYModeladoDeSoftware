#include "Desktop.h"
#include <string>

Desktop* Desktop::create()
{
  return new Desktop();
}

std::string Desktop::describe()
{
  return "This is a desktop";
}

std::string Desktop::ensamble()
{
  return "Ensambling components";
}
std::string Desktop::configure()
{
  return "Configuring desktop";
}
std::string Desktop::install()
{
  return "Installing software";
}
std::string Desktop::pack()
{
  return "Packing desktop";
}
