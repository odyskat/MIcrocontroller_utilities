// **** INCLUDES *****
#include "LowPower.h"

// Use pin 2 as wake up pin
const int wakeUpPin = 2;
int num=0;
int numloop=0;
int doorState;

void wakeUp()
{
  Serial.println("***************************");
  Serial.print("eisodos sthn wake up noymero = ");
  Serial.println(num);
  Serial.println("***************************");
  num=num+1;
    // Just a handler for the pin interrupt.
}

void setup()
{
  Serial.begin(9600);
    // Configure wake up pin as input.
    // This will consumes few uA of current.
    pinMode(wakeUpPin, INPUT_PULLUP);   
}

void loop() 
{
    // Allow wake up pin to trigger interrupt on low.
    attachInterrupt(digitalPinToInterrupt(2), wakeUp, HIGH);
    
  Serial.println("----------------------------------");
  Serial.print("nuber of iserts to loop function = ");
  Serial.println(numloop);
  Serial.println("----------------------------------");
    
    numloop=numloop+1;
   
   
   
    // Enter power down state with ADC and BOD module disabled.
    // Wake up when wake up pin is low.
    doorState = digitalRead(wakeUpPin);
    if (doorState==LOW) {
    LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
    }
     
    
    // Disable external pin interrupt on wake up pin.
    //detachInterrupt(0); 
    
    // Do something here
    // Example: Read sensor, data logging, data transmission.


}
