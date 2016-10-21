#ifndef EXAMEN_TVAZTECA_H
#define EXAMEN_TVAZTECA_H

#include "Observer.hpp"
#include "Noticia.hpp"
#include <iostream>

class TvAzteca : public Observer {
private:
  Noticia noticia;

public:
  void update(Noticia n);
  void printNoticia();
};

void TvAzteca::update(Noticia n)
{
  noticia = n;
  printNoticia();
}
void TvAzteca::printNoticia()
{
  std::cout << "TvAzteca le informa sobre..." << std::endl;
  std::cout << "La noticia: " << noticia.getTitular() << std::endl;
}

#endif  //EXAMEN_TVAZTECA_H
