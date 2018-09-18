// HELLO WORLD: Blinking an LED
// Turn LED on for half of every second.
// Email: \marissa@utterbergdatadev.com
// Website: https://utterbergdatadev.com
// 2018.09.18

/*********************************************/
const int ledPin = 13; // The LED pin number
/*********************************************/

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as output.
}

/*********************************************/
// The loop runs forever!
/*********************************************/

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(500); // Wait for 0.5 second
  digitalWrite(ledPin, LOW); // Turn the LED off
  delay(1500); // Another half second pause
}

/*********************************************/
