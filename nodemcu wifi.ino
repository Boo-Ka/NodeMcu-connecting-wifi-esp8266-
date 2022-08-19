/* NodeMcu-connecting-wifi-esp8266-
the nodemcu connecting to any hotspot
Name : boopathi */

#include<ESP8266WiFi.h>
#define ssid "1001001"
#define password "1A2B3C4D"

void setup() 
{
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to ");
  Serial.print(ssid);
   while(WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");
  }
  Serial.println("Connected! IP address: ");
  Serial.println(WiFi.localIP()); 
}

void loop()
{

}
