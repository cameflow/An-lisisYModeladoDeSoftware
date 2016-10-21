#ifndef EXAMEN_NOTICIA_H
#define EXAMEN_NOTICIA_H

#include <string>

class Noticia {
private:
  std::string titular;
  
  int indicador = 0;
public:
  void setTitular(std::string newIitular);
  void setIndicador(int newIndicador);
  int getIndicador();
  std::string getTitular();
};

void Noticia::setTitular(std::string newIitular)
{
  titular = newIitular;
}

void Noticia::setIndicador(int newIndicador)
{
  indicador = newIndicador;
}

int Noticia::getIndicador()
{
  return indicador;
}

std::string Noticia::getTitular()
{
  return titular;
}




#endif  //EXAMEN_NOTICIA_H
