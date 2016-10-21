
#include <iostream>
#include <string>
#include "Mvs.hpp"
#include "Televisa.hpp"
#include "CnnNoticas.hpp"
#include "TvAzteca.hpp"
#include "RadioFormula.hpp"
#include "Reporter.hpp"



int main(int argc, char const *argv[]) {
  Reporter loret;

  Mvs mvs;
  Televisa televisa;
  CnnNoticas cnn;
  TvAzteca tvazteca;
  RadioFormula radioformula;
  int laopcion = 10;
  std::string titular;
  Noticia n;
  loret.addObserver(&mvs);
  loret.addObserver(&televisa);
  loret.addObserver(&cnn);
  loret.addObserver(&tvazteca);
  loret.addObserver(&radioformula);

  while (laopcion > 0)
  {
    std::cout << "Dime quién eres" << std::endl;
    std::cout << "1. Hilary" << std::endl;
    std::cout << "2. Trump" << std::endl;
    std::cout << "3. EPN" << std::endl;
    std::cout << "0. Salir" << std::endl;
    std::cin >> laopcion;
    std::cout << std::endl;
    switch (laopcion) {
      case 1:
        n.setIndicador(1);
        std::cout << "Dime la noticia" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, titular);
        std::cout << std::endl;
        std::cout << "NOTICIA SOBRE HILARY" << std::endl;
        n.setTitular(titular);
        loret.setNoticia(n);
        break;
      case 2:
        n.setIndicador(2);
        std::cout << "Dime la noticia" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, titular);
        std::cout << std::endl;
        std::cout << "NOTICIA SOBRE TRUMP" << std::endl;
        n.setTitular(titular);
        loret.setNoticia(n);
        break;
      case 3:
        n.setIndicador(3);
        std::cout << "Dime la noticia" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, titular);
        std::cout << std::endl;
        std::cout << "NOTICIA SOBRE EPN" << std::endl;
        n.setTitular(titular);
        loret.setNoticia(n);
        break;
      case 0:
        std::cout << "ADIOS" << std::endl;
        laopcion = -1;
        break;
      default:
        std::cout << "Esa opción no es valida" << std::endl;
        break;

    }
  }


  return 0;
}
