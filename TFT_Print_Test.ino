#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>
#include <User_Setup.h>
#include <User_Setups/Setup25_TTGO_T_Display.h> //her defe tft_eSPI yukledikce mutleq get commentden cixart
TFT_eSPI tft = TFT_eSPI();  // Invoke library


void setup(void) {
  tft.init();
  tft.setRotation(0);
}

void loop() {
  tft.fillScreen(TFT_WHITE);
  
  tft.setFreeFont(&Orbitron_Light_32);
  tft.setCursor(55, 100);//1UZUNLUQ , 2HUNDURLUK
  tft.setTextColor(TFT_BLUE); 
  tft.print(12.56); 
   tft.setTextColor(TFT_YELLOW);
   tft.print(" C");
  //tft.setFreeFont(&FreeSans12pt7b);

  tft.setFreeFont(&Orbitron_Light_32);
  tft.setTextColor(TFT_PURPLE);
  tft.setCursor(50, 160);//1UZUNLUQ , 2HUNDURLUK
  tft.print(12.56); 
  tft.setTextColor(TFT_BLUE);
  tft.print(" %");
  delay(100);
}
