const byte led_gpio=32;
int threshold=32;
bool touch4detected=false;

void gotTouch()
{
  touch4detected=true;
  }

void setup()
{
  pinMode(led_gpio,OUTPUT);
  Serial.begin(115200);
  delay(500);
  touchAttachInterrupt(T4,gotTouch,threshold);
  
}

void loop()
{
  Serial.println(touchRead(T4)); //Reading from Touch Sensor 4 refer pinMap Diagram for more
  delay(500);
  if(touch4detected)
  {
    digitalWrite(led_gpio,HIGH);
    touch4detected=false;
    delay(500);
    digitalWrite(led_gpio,LOW);
    
     }
  }
