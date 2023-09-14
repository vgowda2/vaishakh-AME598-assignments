#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>


TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_RED);
    ttgo->tft->setTextColor(TFT_WHITE, TFT_RED);
    ttgo->tft->setTextFont(4);
    ttgo->tft->drawString("Vaishakh Gowda", 20, 120); //40,120
}

void loop()
{ 
}
