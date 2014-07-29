#include <ColorLCDShield.h>

#define BACKGROUND  WHITE  // room for growth, adjust the background color according to daylight
#define C_COLOR  RED  // This is the color of the clock face, and digital clock
#define H_COLOR  BLUE  // hour hand color
#define M_COLOR  GREEN  // minute hand color
#define S_COLOR  YELLOW  // second hand color

LCDShield lcd;
int buttonPins[3] = {3, 4, 5};

void setup()
{
  /* Initialize the LCD, set the contrast, clear the screen */
  lcd.init(PHILIPS);
  lcd.contrast(-70);
  lcd.clear(BACKGROUND);
  lcd.setStr("This is a demo!", 50, 5, C_COLOR, BACKGROUND);
}

void loop()
{
}
