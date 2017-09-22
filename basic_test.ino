/* Button Switch Module [S062] : http://rdiot.tistory.com/128 [RDIoT DEMO] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
 
int button=2; //connect button to D2
 
void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");
 
  delay(1000);
 
  lcd.clear();
}
 
void loop()
{
 
  lcd.setCursor(0,0);
  lcd.print("S062:Button Module");
 
  lcd.setCursor(0,1);
  lcd.print("btn_read=" + (String)digitalRead(button) + "  ");
 
 
  lcd.setCursor(0,2);
  if(digitalRead(button)==HIGH) 
  {
     lcd.print("STAT = OFF ");
  }
  else if(digitalRead(button)==LOW) 
  {
     lcd.print("STAT = ON ");
  }
 
}
