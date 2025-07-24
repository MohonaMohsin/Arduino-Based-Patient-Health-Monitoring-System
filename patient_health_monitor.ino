#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#include<DHT.h>

#define REPORTING_PERIOD_MS     1000
#define DHTPIN 2
#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27, 20, 4);

DHT dht(DHTPIN,DHTTYPE);

PulseOximeter pox;
uint32_t tsLastReport = 0;

void onBeatDetected()
{

  Serial.println("Beat!!!");

}

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  dht.begin();
  lcd.setCursor(0, 0);
  lcd.print("      Pluse");
  lcd.setCursor(0, 1);
  lcd.print("    Oximeter");
  delay(2000);

  if (!pox.begin()) {
    Serial.println("FAILED");
    for (;;);
  } else {
    Serial.println("SUCCESS");
  }
  

  pox.setOnBeatDetectedCallback(onBeatDetected);
}

void loop()
{
  pox.update();
  if (millis() - tsLastReport > REPORTING_PERIOD_MS) {

    lcd.clear();
    lcd.setCursor(0 , 0);
    lcd.print("BPM : ");
    Serial.print("BPM : ");
    lcd.print(pox.getHeartRate());
    Serial.println(pox.getHeartRate());
    lcd.setCursor(0 , 1);
    lcd.print("  Sp02: ");
    Serial.print("Sp02: ");
    lcd.print(pox.getSpO2());
    Serial.println((pox.getSpO2()));
    lcd.print("%");
    tsLastReport = millis();

  Serial.print("Humidity = ");
  Serial.print(dht.readHumidity());
  Serial.print("%      Temperature= ");
  Serial.print(dht.readTemperature());
  Serial.println("C");

  lcd.setCursor(0,2);
  lcd.print("Humidity= ");
  lcd.print(dht.readHumidity());
  lcd.print("%     ");
  lcd.setCursor(0,3);
  lcd.print("Temperature= ");
  lcd.print(dht.readTemperature());
  lcd.print((char)223);
  lcd.print("C");

  }
}

