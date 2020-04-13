#include "WiFiServer.h"
#include "WiFiClientSecure.h"
#include <odroid_go.h>

#include "globals.h"
#include "raumCR.h"
#include "raumCAM.h"

globals g;
raumCR rCR(&g);
raumCAM rCAMA(&g);

void setup()
{
  // put your setup code here, to run once:
  GO.begin();
  g.alterRaum = location_raumKEIN;
  g.aktuellerRaum = location_raumCR;
}

void loop()
{
  // put your main code here, to run repeatedly:

  switch (g.aktuellerRaum)
  {
  case location_raumCR:
    // müssen wir den Bildschirm neu zeichnen?
    if (g.alterRaum != g.aktuellerRaum)
    {
      rCR.zeichneRaum();
      g.alterRaum = g.aktuellerRaum;
    }
    // Tasten abfragen und Aktion einleiten
    rCR.rechneTasten();
    break;

  case location_raumCAMA:
    // müssen wir den Bildschirm neu zeichnen?
    if (g.alterRaum != g.aktuellerRaum)
    {
      rCAMA.zeichneRaum();
      g.alterRaum = g.aktuellerRaum;
    }
    // Tasten abfragen und Aktion einleiten
    rCAMA.rechneTasten();
    break;

  default:
    break;
  }

  GO.update();
}