#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int sensor_Pin = A0;
int nilai_ADC_sensor = 0;

void setup() {
  lcd.begin(20,4);
  lcd.setCursor(0,0);
  lcd.print("Monitoring Suhu");
  lcd.setCursor(0,1);
  lcd.print("Telekomunikasi PNJ");
  delay(500);
  lcd.clear();
  }

void loop() {
  nilai_ADC_sensor = analogRead(sensor_Pin);
  double Celcius = ((5.0/1023.0)*analogRead(sensor_Pin))*100;
  lcd.setCursor(0,2);
  lcd.print("SUHU RUANGAN");
  lcd.setCursor(0,3);
  lcd.print(Celcius);
  lcd.setCursor(4,3);
  lcd.print((char)233);
  lcd.setCursor(5,3);
  lcd.print("C");
}
