#ifndef raumCAM_h
#define raumCAM_h

#include <odroid_go.h>
#include "globals.h"
#include "utils.h"

class raumCAM
{
public:
  raumCAM(globals *object);
  void zeichneRaum();
  void rechneTasten();

private:
  globals *_g;
};

#endif