/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-door-sensor
 */

#define DOOR_SENSOR_PIN 19  // ESP32 pin GIOP19 connected to door sensor's pin

int doorState;

void setup() {
  Serial.begin(9600);                      // initialize serial
  pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP);  // set ESP32 pin to input pull-up mode
}

void loop() {
  doorState = digitalRead(DOOR_SENSOR_PIN);  // read state

  if (doorState == HIGH) {
    Serial.println("The door is open");
    Serial.print("high value=");
    Serial.println(doorState);
  } else {
    Serial.println("The door is closed");
    Serial.print("low value=");
    Serial.println(doorState);
  }
  delay(1000);
}



/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-door-sensor
 */





// #define DOOR_SENSOR_PIN  19  // ESP32 pin GIOP19 connected to door sensor's pin

// int currentDoorState; // current state of door sensor
// int lastDoorState;    // previous state of door sensor

// void setup() {
//   Serial.begin(9600);                     // initialize serial
//   pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP); // set ESP32 pin to input pull-up mode

//   currentDoorState = digitalRead(DOOR_SENSOR_PIN); // read state
// }

// void loop() {
//   lastDoorState = currentDoorState;              // save the last state
//   currentDoorState  = digitalRead(DOOR_SENSOR_PIN); // read new state

//   if (lastDoorState == LOW && currentDoorState == HIGH) { // state change: LOW -> HIGH
//     Serial.println("The door-opening event is detected");
//     // TODO: turn on alarm, light or send notification ...
//   }
//   else
//   if (lastDoorState == HIGH && currentDoorState == LOW) { // state change: HIGH -> LOW
//     Serial.println("The door-closing event is detected");
//     // TODO: turn off alarm, light or send notification ...
//   }
// }
