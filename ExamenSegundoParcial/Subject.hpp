#ifndef EXAMEN_SUBJECT_H
#define EXAMEN_SUBJECT_H

#include "Observer.hpp"

class Subject {
public:
  virtual void addObserver(Observer* o) = 0;
  virtual void removeObserver(Observer* o) = 0;
  virtual void notifyObservers() = 0;
};

#endif  //EXAMEN_SUBJECT_H
