#include "utils.h"

#include <odroid_go.h>

void utils::zeichneBlock(uint16_t x, uint16_t y, uint32_t farbe)
{
  GO.lcd.fillRect(x * 10, y * 10, 8, 8, farbe);
}

void utils::zeichneStrichH(uint16_t x, uint16_t y, uint32_t farbe)
{
  for (uint16_t i = 0; i < 32; i++)
  {
    zeichneBlock(i, y, farbe);
  }
}

void utils::zeichneObjekt(uint16_t x, uint16_t y, String objekt[], uint16_t objektZeilen)
{
  for (uint16_t yi = 0; yi < objektZeilen; yi++)
  {
    uint16_t bloecke = objekt[yi].length() / 2;
    for (uint16_t xi = 0; xi < bloecke; xi++)
    {
      if (x + xi < 32 and y + yi < 24)
      {
        String farbeCode = objekt[yi].substring(xi * 2, (xi * 2) + 2);
        uint32_t farbe = 0;
        if (farbeCode == "Oo")
        {
          farbe = MAROON;
        }
        else if (farbeCode == "R ")
        {
          farbe = RED;
        }
        else if (farbeCode == "Dg")
        {
          farbe = DARKGREY;
        }
        else if (farbeCode == "Lg")
        {
          farbe = LIGHTGREY;
        }
        else if (farbeCode == "Y ")
        {
          farbe = YELLOW;
        }
        else if (farbeCode == "B ")
        {
          farbe = BLUE;
        }
        else if (farbeCode == "K ")
        {
          farbe = BLACK;
        }
        else if (farbeCode == "W ")
        {
          farbe = WHITE;
        }
        if (farbe > 0)
        {
          zeichneBlock(x + xi, y + yi, farbe);
        }
      }
    }
  }
}
void utils::zeichneRoboter(uint16_t x, uint16_t y, uint32_t farbe)
{
  zeichneBlock(x, y, farbe);
  zeichneBlock(x + 1, y, farbe);
  zeichneBlock(x + 1, y - 1, farbe);
  zeichneBlock(x + 1, y - 2, farbe);
  zeichneBlock(x + 2, y - 2, farbe);
  zeichneBlock(x + 3, y - 2, farbe);
  zeichneBlock(x + 3, y - 1, farbe);
  zeichneBlock(x + 3, y, farbe);
  zeichneBlock(x + 4, y, farbe);
  zeichneBlock(x + 1, y - 3, farbe);
  zeichneBlock(x + 2, y - 3, farbe);
  zeichneBlock(x + 3, y - 3, farbe);
  zeichneBlock(x + 1, y - 4, farbe);
  zeichneBlock(x + 2, y - 4, farbe);
  zeichneBlock(x + 3, y - 4, farbe);
  zeichneBlock(x, y - 4, farbe);
  zeichneBlock(x - 1, y - 4, farbe);
  zeichneBlock(x + 4, y - 4, farbe);
  zeichneBlock(x + 5, y - 5, farbe);
}
