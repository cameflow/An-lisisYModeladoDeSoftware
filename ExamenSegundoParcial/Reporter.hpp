#ifndef EXAMEN_REPORTER_H
#define EXAMEN_REPORTER_H

#include "Subject.hpp"
#include "Noticia.hpp"
#include "Observer.hpp"
#include <list>

class Reporter : public Subject {
private:
  std::list<Observer*> observers;
  Noticia n;

public:
  void addObserver(Observer* newObserver);
  void removeObserver(Observer* deleteObserver);
  void notifyObservers();

  void setNoticia(Noticia newNoticia);


};

void Reporter::addObserver(Observer* newObserver)
{
  observers.push_back(newObserver);
}
void Reporter::removeObserver(Observer* deleteObserver)
{
  observers.remove(deleteObserver);
  std::cout << "Se borro el observer" << std::endl;
}
void Reporter::notifyObservers()
{
  for (Observer* observer : observers)
  {
    observer->update(n);
  }
}

void Reporter::setNoticia(Noticia newNoticia)
{
  n = newNoticia;
  notifyObservers();
}


#endif  //EXAMEN_REPORTER_H
