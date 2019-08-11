const byte led_gpio=33;     //Led is attached to gpio33
int brightnessVal=0;
int fadeVal=1;



void setup() {
  
ledcAttachPin(led_gpio,0);          //assign the led to a channel


/* 
 Initialize channels
 https://github.com/espressif/arduino-esp32/blob/master/cores/esp32/esp32-hal-ledc.h
 channels 0-15, resolution 1-16 bits, freq limits depend on resolution
 */
 ledcSetup(0,4000,2);// 4 kHz PWM, 2-bit resolution

  /*
  2_bit_resolution   2^2 => 4
  4_bit_resolution   2^3 => 8
  .
  .
  .
  8_bit_resolution   2^8 => 256
  12_bit_resolution  2^12 => 4,096
  */
}




void loop() {

ledcWrite(0,brightnessVal);           // set the brightnessVal of the LED to the channel

brightnessVal=brightnessVal+fadeVal;
if (brightnessVal<=0||brightnessVal>=3)  //Here the range is set by referring the resolution table given above
{
  fadeVal=-fadeVal;
  }
  delay(30);
}
