/* Code written by Manan.R.Gandhi 
   for esp32 tutorials
 */


const byte led_gpio=33;


void setup() {                         // the setup function runs once when you press reset or power the board

  pinMode(led_gpio, OUTPUT);           // initialize digital pin led_gpio as an output.
}


void loop() {                          // the loop function runs over and over again forever
  digitalWrite(led_gpio, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(1000);                         // wait for a second
  digitalWrite(led_gpio, LOW);         // turn the LED off by making the voltage LOW
  delay(1000);                         // wait for a second
}
