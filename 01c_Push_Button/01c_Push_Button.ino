const byte led_gpio = 4;
const byte button_gpio = 2;

int buttonState = 0;        



void setup() {
  // initializing digital pin led_gpio as an output.
  pinMode(led_gpio, OUTPUT);

  // initializing the pushbutton pin as an input:
  pinMode(button_gpio, INPUT);
}


void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(button_gpio);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
     digitalWrite(led_gpio, HIGH);               // turn LED on:
     
  } else {
    
  
    digitalWrite(led_gpio, LOW);                  // turn LED off:
  }
}
