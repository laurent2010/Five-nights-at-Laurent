#ifndef globals_h
#define globals_h

#include <odroid_go.h>

#define location_raumKEIN 0
#define location_raumCR 1
#define location_raumCAMA 2

class globals
{
public:
    globals();
    uint16_t alterRaum;
    uint16_t aktuellerRaum;

private:
};

#endif