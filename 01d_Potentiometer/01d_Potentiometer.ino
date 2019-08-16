const byte pot_gpio=32;



void setup()
{
 
  Serial.begin(9600);
  }

void loop()

{

Serial.println(analogRead(pot_gpio));
  
  }
