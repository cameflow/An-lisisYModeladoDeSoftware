/*
  Programa que muestra como se va construyendo una computadora
  En el main solo se debe de cambiar el argumento
      poniendo el modelo que se quiere construir.
*/

#include <iostream>
#include <string>
#include <chrono>
#include<thread>

using namespace std;

void selectMachine(string modelo);
void selectComponents(string modelo);
void installSoftware(string modelo);
void empaquetado(string modelo);

int main(int argc, char const *argv[]) {

  selectMachine("Laptop");

  return 0;
}

void selectMachine(string modelo){
  std::cout << "Se selecciono: " << modelo << std::endl;
  std::this_thread::sleep_for(std::chrono::nanoseconds(10));
  std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(2));
  selectComponents(modelo);
}

void selectComponents(string modelo){
    std::cout << "Se seleccionaron los componentes de la: " << modelo << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(10));
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(2));
    installSoftware(modelo);
}

void installSoftware(string modelo){
    std::cout << "Se está instalando el software de la: " << modelo << std::endl;
    std::this_thread::sleep_for(std::chrono::nanoseconds(10));
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(2));
    empaquetado(modelo);
}

void empaquetado(string modelo){
  std::cout << "se está empaquetado la: " << modelo << std::endl;
}
