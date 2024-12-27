/*#include <DHT.h>
#include <LiquidCrystal.h>
#include <Wire.h>
#include <RTClib.h>

LiquidCrystal lcd()

RTC_DS3231 rtc;

const int pin = A0;
const int buzzer = 6;
DHT dht(pin, DHT11);
LCD lcd()

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  lcd.begin(16, 2);
  if (!rtc.begin()) {
    lcd.print("Couldn't find RTC");
    delay(1000);
    lcd.clear()
    while (1);
  }
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); // Set the RTC to the date & time this sketch was compiled
}

void loop() {
    Date now = rtc.now();
    
  int hour = now.hour() - 3;
  int minute = now.minute() - 3;
  if(minute < 0){minute += 60;}
  if (hour < 0) hour += 24;
  int temp = dht.readTemperature();
  int hum = dht.readHumidity();
  lcd.clear()
  lcd.print(temp);
  if(temp > 22){
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  delay(2000);
  lcd.clear();
  lcd.print(hum);
  delay(2000);
  lcd.clear();
  lcd.print(hour);
  delay(2000);
}*/
#include <DHT.h>
#include <LiquidCrystal.h>
#include <Wire.h>
#include <DS3231.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Initialize with appropriate pins
DS3231 rtc; // Initialize DS3231 with I2C pins

const int pin = A0;
const int buzzer = 6;
DHT dht(pin, DHT11);

void setup() {
  dht.begin();
  lcd.begin(16, 2);
}

void loop() { // Get current time
  DateTime hms = RTClib::now();
  int hour = hms.hour() - 3; // Adjusted for negative values
  int minute = hms.minute() - 3; // Adjusted for negative values
  int temp = dht.readTemperature();
  int hum = dht.readHumidity(); // Corrected spelling

  lcd.clear();
  lcd.print(temp);
  if (temp > 22) {
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  delay(2000);
  lcd.clear();
  lcd.print(hum);
  delay(2000);
  lcd.clear();
  lcd.print(hour + ":" + minute);
  delay(2000);
}
