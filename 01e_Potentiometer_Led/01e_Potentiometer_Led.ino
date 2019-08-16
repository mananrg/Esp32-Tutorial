const byte pot_gpio=32;
const byte led_gpio=34;

int brightness=0;
int fadeamount=5;

void setup()
{
  ledcAttachPin(led_gpio,0);
  ledcSetup(0,4000,12);
  Serial.begin(9600);
  }

void loop()

{
ledcWrite(0,analogRead(pot_gpio));
Serial.println(analogRead(pot_gpio));
  
  }
