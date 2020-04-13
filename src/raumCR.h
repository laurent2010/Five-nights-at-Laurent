#ifndef raumCR_h
#define raumCR_h

#include <odroid_go.h>
#include "globals.h"
#include "utils.h"

class raumCR
{
public:
  raumCR(globals *object);
  void zeichneRaum();
  void rechneTasten();

private:
  globals *_g;
};

#endif