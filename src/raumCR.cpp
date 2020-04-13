#include "raumCR.h"

// Grafische Objekte definieren

#define CR_tischZeilen 4
String CR_tisch[CR_tischZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "OoOoOoOoOoOoOoOoOoOoOo",
    "Oo                  Oo",
    "Oo                  Oo",
    "Oo                  Oo"};

#define CR_monitorZeilen 4
String CR_monitor[CR_monitorZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "DgDgDgDg",
    "DgLgLgDg",
    "DgLgLgDg",
    "DgDgDgDg"};

#define CR_tuerZeilen 13
String CR_tuer[CR_tuerZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "R R R R R R R R R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R ",
    "R K K K K K K K R "};

#define CR_schalterZeilen 5
String CR_schalter[CR_schalterZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "K K K ",
    "K R K ",
    "K K K ",
    "K LgK ",
    "K K K "};

#define CR_kabelZeilen 3
String CR_kabel[CR_kabelZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "Y Y ",
    "Y   ",
    "Y   "};

#define CR_blattZeilen 4
String CR_blatt[CR_blattZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "W R W ",
    "W W W ",
    "W W W ",
    "W W W "};

#define CR_geburtstagsTischZeilen 6
String CR_geburtstagsTisch[CR_geburtstagsTischZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "W W W W W W W W W",
    "W OoOoOoOoOoOoOoW",
    "  Oo          Oo ",
    "  Oo          Oo ",
    "  Oo          Oo ",
    "  Oo          Oo "};

#define CR_rechterStuhlZeilen 5
String CR_rechterStuhl[CR_rechterStuhlZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "    Oo",
    "    Oo",
    "OoOoOo",
    "Oo  Oo",
    "Oo  Oo"};

#define CR_linkerStuhlZeilen 5
String CR_linkerStuhl[CR_linkerStuhlZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "Oo    ",
    "Oo    ",
    "OoOoOo",
    "Oo  Oo",
    "Oo  Oo"};

#define CR_hintergrundZeilen 24
String CR_hintergrund[CR_hintergrundZeilen] = {
    //   0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W W ",
    "DgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDg",
    "DgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDgDg"};

// constructor
raumCR::raumCR(globals *object)
{
    _g = object;
}

void raumCR::zeichneRaum()
{
    GO.lcd.clearDisplay();
    utils::zeichneObjekt(0, 0, CR_hintergrund, CR_hintergrundZeilen);
    utils::zeichneObjekt(12, 9, CR_tuer, CR_tuerZeilen);
    utils::zeichneObjekt(11, 18, CR_tisch, CR_tischZeilen);
    utils::zeichneObjekt(11, 14, CR_monitor, CR_monitorZeilen);
    utils::zeichneObjekt(3, 9, CR_blatt, CR_blattZeilen);
    utils::zeichneObjekt(21, 6, CR_blatt, CR_blattZeilen);
    utils::zeichneObjekt(9, 12, CR_schalter, CR_schalterZeilen);
    utils::zeichneObjekt(10, 10, CR_kabel, CR_kabelZeilen);
}

void raumCR::rechneTasten()
{
    if (GO.BtnB.wasPressed())
    {
        // wir sind in CR und Taste B wurde gedrückt
        // -> wechsle zu raumCAMA
        _g->aktuellerRaum = location_raumCAMA;
    }
}