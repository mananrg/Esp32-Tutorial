const byte led_gpio=32;

void setup()
{
  pinMode(led_gpio,OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  Serial.println(touchRead(T4)); //Reading from Touch Sensor 4 refer pinMap Diagram for more
  delay(500);
  if(touchRead(T4)<20)
  {
    digitalWrite(led_gpio,HIGH);
    
    }

    else
   {
     digitalWrite(led_gpio,LOW);
    
     }
  }
