#include <Wire.h>
#include <Adafruit_SSD1306.h>
//------------

#define OLED_RESET -1  // Not used
Adafruit_SSD1306 display(OLED_RESET);

//------------
void setup() {
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x64)
  // init done

  // Draw a test
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello ENPH253");
  display.display();
  delay(1000);

  pinMode(LED_BUILTIN, OUTPUT);
}

//------------
void loop() {
  //Blink LEDs
  pinMode(LED_BUILTIN, HIGH);
  //Wait 500 ms
  delay(500);
  pinMode(LED_BUILTIN, LOW);
  delay(500);
}