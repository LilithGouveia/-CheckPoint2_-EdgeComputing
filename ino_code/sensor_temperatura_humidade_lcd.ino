// Código desenvolvido pelo grupo SoftForge

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal_I2C.h>


#define DHTPIN 4  
#define DHTTYPE DHT11 

// Portas
const byte RED = 10;
const byte BLUE = 11;
const byte GREEN = 12;
const int BUZZER = 8;
int lightSensorPin = A0;

// Variáveis
int i = 0;

// Configurações
DHT_Unified dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

uint32_t delayMS;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.clear();         
  lcd.backlight();
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(lightSensorPin, INPUT);
  dht.begin();
  sensor_t sensor;
}

void loop() {
  // Delay entre medições.
  sensors_event_t event;

  // Temperatura
  dht.temperature().getEvent(&event);
  if ((event.temperature) < 10) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temp. Baixa");
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(event.temperature);
    lcd.print(F(" C"));
    for (i; i < 1; i++) {
    tone(BUZZER, 1500);
    delay(2000);
    noTone(BUZZER);
    }
    i = 0;
  }
  else if((event.temperature) > 15){
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temp. Alta");
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(event.temperature);
    lcd.print(F(" C"));
    for (i; i < 1; i++) {
    tone(BUZZER, 1500);
    delay(2000);
    noTone(BUZZER);
    }
    i = 0;
  }
  else{
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperatura OK");
    lcd.setCursor(0,1);
    lcd.print("Temp: ");
    lcd.print(event.temperature);
    lcd.print(F(" C"));
    delay(2000);
  }

  //  Humidade 

  dht.humidity().getEvent(&event);
  if ((event.relative_humidity) < 50) {
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Humidade Baixa");
    lcd.setCursor(0, 1);
    lcd.print("Humidade: ");
    lcd.print(event.relative_humidity);
    lcd.print("%");
    for (i; i < 1; i++) {
    tone(BUZZER, 1500);
    delay(2000);
    noTone(BUZZER);
    }
    i = 0;
  }
  else if((event.relative_humidity) > 70) {
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Humidade Alta");
    lcd.setCursor(0, 1);
    lcd.print("Humidade: ");
    lcd.print(event.relative_humidity);
    lcd.print("%");
    for (i; i < 1; i++) {
    tone(BUZZER, 1500);
    delay(2000);
    noTone(BUZZER);
    }
    i = 0;
  }
  else{
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Humidade OK");
    lcd.setCursor(0,1);
    lcd.print("Humidade: ");
    lcd.print(event.relative_humidity);
    lcd.print("%");
    delay(2000);
  }

  // Luz

  if(analogRead(lightSensorPin) < 120){
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Luz aceitavel");
    delay(1000);
  }
  else if(analogRead(lightSensorPin) >= 121 && analogRead(lightSensorPin) <= 249){
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ambiente a meia");
    lcd.setCursor(0,1);
    lcd.print("luz");
    delay(1000);
  }
  else{
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ambiente muito");
    lcd.setCursor(0,1);
    lcd.print("claro");
    for (i; i < 1; i++) {
    tone(BUZZER, 1500);
    delay(1000);
    noTone(BUZZER);
    }
    i = 0;
}}