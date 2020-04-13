#include "raumCAM.h"

// Grafische Objekte definieren

#define CAMA_hintergrundZeilen 24
String CAMA_hintergrund[CAMA_hintergrundZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K W W W W W W W W W W W W W W W W W W W W W W W W K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K ",
    "K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K K "};

// constructor
raumCAM::raumCAM(globals *object)
{
    _g = object;
}

void raumCAM::zeichneRaum()
{
    GO.lcd.clearDisplay();
    utils::zeichneObjekt(0, 0, CAMA_hintergrund, CAMA_hintergrundZeilen);
}

void raumCAM::rechneTasten()
{
    if (GO.BtnB.wasPressed())
    {
        // wir sind in CAMA und Taste B wurde gedrückt
        // -> wechsle zu raumCR
        _g->aktuellerRaum = location_raumCR;
    }
}