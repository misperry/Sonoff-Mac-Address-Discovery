/*
 *  File Name: SonOff Mac address Discovery.ino
 *  
 *  Application: SonOff Mac Address Discovery
 *  
 *  Description: This is a simple code that allows
 *  you to check the MAC address of your SonOff switch
 *  incase you have employed a Mac Address filter on your
 *  router and need to know what the devices is to add.
 *  
 *  Author: M. Sperry - http://www.youtube.com/misperry
 *  Date: 05/26/2018
 *  Revision: 1.0
 *  
 *  
 */
 
#include <ESP8266WiFi.h>


void setup_wifi() {
 Serial.begin(115200);
 Serial.println(WiFi.macAddress());
  delay(2000);
  
}


void setup()
{
  setup_wifi(); 
}
 
void loop()
{
  Serial.print("Your MAC Address is: ");
  Serial.println(WiFi.macAddress());
  Serial.println();
  delay(2000);
}


