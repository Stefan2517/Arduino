//Librarii pentru OLED
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
// Librarie pentru snzorul IR 
#include <IRremote.h>

// Definesc pinul pentru senzorul de citire
const int RECV_PIN = 7;

// Definirea senzorului IR și a rezultatelor obiectelor
IRrecv irrecv(RECV_PIN);
decode_results results;

// Definesc pinii pentru LED și Motor
#define LED 6
#define Motor 5
// Definirea adresei de comunicare a Display-ului
#define OLED_Address 0x3C
Adafruit_SSD1306 oled(1);
 
void setup() {
    // Pornirea senzorului IR de recepție, a Display-ului
//    Declarerea pinilor Led-ului si a motorasului ca fiind de iesire
  irrecv.enableIRIn();
  oled.begin(SSD1306_SWITCHCAPVCC, OLED_Address);
  pinMode(LED, OUTPUT);
  pinMode(Motor, OUTPUT);
}

void loop() {
if (irrecv.decode(&results)){

        switch(results.value){
          case 0xFFA25D: //Tasta 1
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 1");
          oled.display();
          delay(2000);
          break;

          case 0xFF629D: //Tasta 2
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 2");
          oled.display();
          delay(2000);
          break;

          case 0xFFE21D: //Tasta 3
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 3");
          oled.display();
          delay(2000);
          break;

          case 0xFF22DD: //Tasta 4
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 4");
          oled.display();
          delay(2000);
          break;

          case 0xFF02FD: //Tasta 5
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 5");
          oled.display();
          delay(2000);
          break;

          case 0xFFC23D: //Tasta 6
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 6");
          oled.display();
          delay(2000);
          break;

          case 0xFFE01F: //Tasta 7
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 7");
          oled.display();
          delay(2000);
          break;

          case 0xFFA857: //Tasta 8
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 8");
          oled.display();
          delay(2000);
          break;

          case 0xFF906F: //Tasta 9
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 9");
          oled.display();
          delay(2000);
          break;

          case 0xFF9867: //Tasta 0
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA 0");
          oled.display();
          delay(2000);
          break;

          case 0xFF6897: //Tasta *
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA *");
          oled.display();
          delay(2000);
          break;

          case 0xFFB04F: //Tasta #
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost apasata:");  
          oled.setCursor(0,13);
          oled.println("TASTA #");
          oled.display();
          delay(2000);
          break;

          case 0xFF18E7: //Tasta SAGEATA SUS
          digitalWrite(Motor,HIGH);
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A pornit:");  
          oled.setCursor(0,13);
          oled.println(" Motorul ");
          oled.display();
          delay(2000);
          break;

          case 0xFF4AB5: //Tasta SAGEATA JOS
          digitalWrite(Motor,LOW);
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost oprit:");  
          oled.setCursor(0,13);
          oled.println(" Motorul ");
          oled.display();
          delay(2000);
          break;

          case 0xFF10EF: //Tasta SAGEATA STANGA
          digitalWrite(LED,HIGH);
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost pornit:");  
          oled.setCursor(0,13);
          oled.println(" LED-ul ");
          oled.display();
          delay(2000);
          break;

          case 0xFF5AA5: //Tasta SAGEATA DREAPTA
          digitalWrite(LED,LOW);
          oled.clearDisplay();
          oled.setTextColor(WHITE);
          oled.setCursor(0,0);
          oled.println("A fost oprit:");  
          oled.setCursor(0,13);
          oled.println(" LED-ul");
          oled.display();
          delay(2000);
          break;
    }
    irrecv.resume(); 
  }
}
