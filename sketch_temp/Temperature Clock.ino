#include <DHT.h>
#include <LiquidCrystal.h>
#include <Wire.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int tmu = 13;
const int buzzer = 6;
DHT dht(tmu, DHT11);

void setup() {
  dht.begin();
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(tmu, OUTPUT);
}

void loop() {
  int temp = dht.readTemperature();
  int hum = dht.readHumidity();

  Serial.println("Temperatura: ");
  Serial.print(temp);
  Serial.print("°C");
    lcd.setCursor(0, 0);
  lcd.print("Temperatu.: ");
  lcd.print(temp);
  lcd.print("C");
  if (temp > 30) {
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  delay(2000);
  Serial.println("Umidade: ");
  Serial.print(hum);
  Serial.print("%");
    lcd.setCursor(0, 1);
  lcd.print("Umidade: ");
  lcd.print(hum);
  lcd.print("%");
  delay(2000);
}
