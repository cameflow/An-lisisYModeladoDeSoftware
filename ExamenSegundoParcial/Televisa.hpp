#ifndef EXAMEN_TELEVISA_H
#define EXAMEN_TELEVISA_H

#include "Observer.hpp"
#include "Noticia.hpp"
#include <iostream>

class Televisa : public Observer {
private:
  Noticia noticia;

public:
  void update(Noticia n);
  void printNoticia();
};

void Televisa::update(Noticia n)
{
  noticia = n;
  printNoticia();
}
void Televisa::printNoticia()
{
  std::cout << "Televisa le informa sobre..." << std::endl;
  std::cout << "La noticia: " << noticia.getTitular() << std::endl;
}

#endif  //EXAMEN_TELEVISA_H
