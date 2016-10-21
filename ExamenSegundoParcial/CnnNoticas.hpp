#ifndef EXAMEN_CNNNOTICIAS_H
#define EXAMEN_CNNNOTICIAS_H

#include "Observer.hpp"
#include "Noticia.hpp"
#include <iostream>

class CnnNoticas : public Observer {
private:
  Noticia noticia;

public:
  void update(Noticia n);
  void printNoticia();
};

void CnnNoticas::update(Noticia n)
{
  noticia = n;
  printNoticia();
}
void CnnNoticas::printNoticia()
{
  if (noticia.getIndicador() != 3)
  {
    std::cout << "CnnNoticas le informa sobre..." << std::endl;
    std::cout << "La noticia: " << noticia.getTitular() << std::endl;
  }
}

#endif  //EXAMEN_CNNNOTICIAS_H
