#include <CayenneMQTTESP32.h>

#define CAYENNE_DEBUG

#define CAYENNE_PRINT Serial

 

char ssid[] = "manan";

char password[]="oddpotato975";

 

char username[] = "08f4db80-16b0-11e8-b42d-698bd45831f1";

char mqtt_password[] = "21b4aca5611c5397b5a067e68a9fc724b69c7458";

char cliend_id[] = "227cc510-bf72-11e9-809b-df5a1171d82f";

 

void setup() {

  Cayenne.begin(username, mqtt_password, cliend_id, ssid, password);

  pinMode(2, OUTPUT);

  digitalWrite(2, HIGH);

}

 

void loop() {

  Cayenne.loop();

}

CAYENNE_IN(0)

{

  digitalWrite(2, !getValue.asInt()); 

}
