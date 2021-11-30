/*
 Blink with variable
 
 Turns an LED on for one second, then off for one second, repeatedly.
 But the interval increases each time by 1 more seconds.
 
 created on Nov 2021
 by Ryan Pellowe

*/

int blinkTime = 1000;
    
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(blinkTime);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    
    blinkTime = blinkTime + 1000;
}
