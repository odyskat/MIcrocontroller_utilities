
// The analogWrite() function uses PWM, so if you want to change the pin you're
// using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
// are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.



int pwmPin = 23;  // the PWM pin the Fan is attached to
int speed = 100;   //starting value, range 0 to 255 becuse of 8bit binary (8digit binary 2^*=256 values)
// int fadeAmount = 5;  // how many points to fade the LED by


// the setup routine runs once when you press reset:
void setup() {

  pinMode(pwmPin, OUTPUT);  // declare pin 9 to be an output:
}


// the loop routine runs over and over again forever:
void loop() {
  // set the speed (duty cycel from 0 to 255 see aboveve comments) of pwm:
  analogWrite(pwmPin, speed);

  // // change the speed for next time through the loop:
  // speed = speed + fadeAmount;

  // // reverse the direction of the fading at the ends of the fade:
  // if (speed <= 0 || speed >= 255) {
  //   fadeAmount = -fadeAmount;
  // }
  // wait for 30 milliseconds to see the dimming effect
  //delay(30);
}
