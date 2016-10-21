#ifndef EXAMEN_MVS_H
#define EXAMEN_MVS_H

#include "Observer.hpp"
#include "Noticia.hpp"
#include <iostream>

class Mvs : public Observer {
private:
  Noticia noticia;

public:
  void update(Noticia n);
  void printNoticia();
};

void Mvs::update(Noticia n)
{
  noticia = n;
  printNoticia();
}
void Mvs::printNoticia()
{
  std::cout << "MVS le informa sobre..." << std::endl;
  std::cout << "La noticia: " << noticia.getTitular() << std::endl;
}

#endif  //EXAMEN_MVS_H
