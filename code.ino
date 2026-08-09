#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// ---------- DHT11 Setup ----------
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---------- Gas Sensor & Alerts ----------
#define GAS_SENSOR A0
#define BUZZER 5
#define LED 6

float tempLimit = 30;   // Temperature threshold (°C)
int gasLimit = 400;       // Gas threshold (analog value)

// ---------- LCD Setup ----------
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Change to 0x3F if needed (check via I2C Scanner)

void setup() {
  Serial.begin(9600); 
  dht.begin();

  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(BUZZER, LOW);
  digitalWrite(LED, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Temp&Gas Detector");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int gasValue = analogRead(GAS_SENSOR);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity);
  Serial.print(" %  |  Gas: ");
  Serial.println(gasValue);

  // ---------- ALERT CONDITION ----------
  if (temperature > tempLimit || gasValue > gasLimit) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(LED, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ALERT");
    lcd.setCursor(0, 1);
    lcd.print("Temp:");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C");
  } 
  else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED, LOW);

    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C H:");
    lcd.print(humidity, 0);
    lcd.print("%   ");

    lcd.setCursor(0, 1);
    lcd.print("Gas:");
    lcd.print(gasValue);
    lcd.print("     ");
  }

  delay(1000);
}
