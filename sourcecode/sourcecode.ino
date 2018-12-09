#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "82beda04043e4f9c8ab2aca70a31c8d5";

// WiFi credentials.
char ssid[] = "Alam";
char pass[] = "tubagus313";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
