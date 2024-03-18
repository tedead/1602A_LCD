#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

char firstLine[]="Welcome                    ";
char secondLine[]="to the jungle!!!!!!!!!!!!!";

//Character time delay
int timeDelay = 200;

//Address: 0x27
//Display is 16 columns and 2 rows.
LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop() 
{
  lcd.setCursor(15, 0);

  for (int x = 0; x < 26; x++)
  {
    lcd.scrollDisplayLeft();
    lcd.print(firstLine[x]);
    delay(timeDelay);
  }

  lcd.clear();
  lcd.setCursor(15, 1);

  for (int x = 0; x < 26; x++)
  {
    lcd.scrollDisplayLeft();
    lcd.print(secondLine[x]);
    delay(timeDelay);
  }

  lcd.clear();
}
