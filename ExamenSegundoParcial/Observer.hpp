#ifndef EXAMEN_OBSERVER_H
#define EXAMEN_OBSERVER_H

#include "Noticia.hpp"

class Observer {
public:
  virtual void update(Noticia n) = 0;
};

#endif  //EXAMEN_OBSERVER_H
