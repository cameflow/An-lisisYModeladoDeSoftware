#ifndef EXAMEN_RADIOFORMULA_H
#define EXAMEN_RADIOFORMULA_H

#include "Observer.hpp"
#include "Noticia.hpp"
#include <iostream>

class RadioFormula : public Observer {
private:
  Noticia noticia;

public:
  void update(Noticia n);
  void printNoticia();
};

void RadioFormula::update(Noticia n)
{
  noticia = n;
  printNoticia();
}
void RadioFormula::printNoticia()
{
  std::cout << "RadioFormula le informa sobre..." << std::endl;
  std::cout << "La noticia: " << noticia.getTitular() << std::endl;
}

#endif  //EXAMEN_RADIOFORMULA_H
