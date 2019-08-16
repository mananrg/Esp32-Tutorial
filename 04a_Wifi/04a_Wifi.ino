#include<WiFi.h>

const char* ssid= "your wifi_ssid";
const char* password="your_wifi_passcode";

void setup()
{
   Serial.begin(115200);
   delay(10);
   Serial.println();
   Serial.println();
   Serial.print("Connecting to");
   Serial.println(ssid);
   WiFi.begin(ssid,password);
   
   while(WiFi.status()!=WL_CONNECTED)
   {
   delay(500);
   Serial.println(".");
    
    
    }
    Serial.println("");                     
    Serial.println("Wifi Connected");
    Serial.println("IP address:");
    Serial.println(WiFi.localIP());
  }


  void loop()
  {}
