#include <Adafruit_BMP280.h>
#include <SSD1306AsciiSoftSpi.h>
#include <Wire.h>




// pin definitions
#define BMPPIN    4
#define CS_PIN    7
#define RST_PIN   8
#define DC_PIN    9
#define MOSI_PIN 11
#define CLK_PIN  13
#define maxString 21
//#define Pressure/133.3 => 99541.66/133.3 = 746.7491372843;

SSD1306AsciiSoftSpi oled;

// ========================= BMP280 section =======================
Adafruit_BMP280 bme; // I2C
//Adafruit_BMP280 bme(BMP_CS); // hardware SPI
//Adafruit_BMP280 bme(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK);
//Adafruit_BMP280 bme;
// ========================= setup ============================
void setup() {
  
  oled.begin(&Adafruit128x64, CS_PIN, DC_PIN, CLK_PIN, MOSI_PIN, RST_PIN);
   
  bme.begin(0x76); // адрес датчика GY-280 (BMP280)
  Serial.begin(57600); 
  oled.setFont(Adafruit5x7);
  oled.println();

}

void loop() 
{
float pressBMP280=0;
float tempBMP280=0;
float altitudeBMP280=0;
//float humidity_________=0;
  
oled.clear();
  oled.set2X(); 
 
  oled.setCursor(12,8);
  oled.println("$*METEO*$");
  
  
  oled.set1X();
  oled.setCursor(15,10);
  //oled.println("$*Meteo*$");
  oled.setCursor(33,11);
  oled.println("PARAMETERS:");

  
  oled.set1X();
  oled.println();
  oled.setCursor(0,15);
  oled.print("Temperature =");
  oled.setCursor(81,15);
  oled.print(bme.readTemperature());
  oled.println(" Co");
  
  
  oled.set1X();
  oled.setCursor(0,17);
  oled.print("Pressure =");
  oled.setCursor(60,17);
  oled.print(bme.readPressure());
  oled.println(" Pa");
  
    
  oled.set1X();
  oled.setCursor(0,20);
  oled.print("Altitude    = ");
  oled.setCursor(80,35);
  oled.print(bme.readAltitude(1013.25)); // this should be adjusted to your local forcase
  oled.println(" m");
  oled.setCursor(75,40);
 
 
  oled.set1X();
  oled.setCursor(87,50);
  int mmH=bme.readPressure()/133.3;
  
  oled.print(mmH);
  oled.println(" mmH ");
  oled.setCursor(0,50);
  oled.print("Press(mmH)  = ");
  delay(30000);
  
   }
