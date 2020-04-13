#ifndef utils_h
#define utils_h

#include <odroid_go.h>

class utils
{
public:
  utils();
  static void zeichneBlock(uint16_t x, uint16_t y, uint32_t farbe);
  static void zeichneStrichH(uint16_t x, uint16_t y, uint32_t farbe);
  static void zeichneObjekt(uint16_t x, uint16_t y, String objekt[], uint16_t objektZeilen);
  static void zeichneRoboter(uint16_t x, uint16_t y, uint32_t farbe);
};

#endif