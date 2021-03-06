#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      for (int i = 0; i < 4; ++i)
      {                     
        myLED = !myLED; 
        ThisThread::sleep_for(100ms);
      }
      for (int i = 0; i < 6; ++i)
      {                     
        myLED2 = !myLED2; 
        ThisThread::sleep_for(100ms);
      }

   }
} 