#define BLYNK_TEMPLATE_ID "TMPL3FRNTwPPG"
#define BLYNK_TEMPLATE_NAME "ParkingSystem"
#define BLYNK_AUTH_TOKEN "HbbX5rFUb2uM-r-h0G235k4YRJSmMNR0"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Realme1";      // Your 2.4GHz hotspot
char pass[] = "12345678";       // Your hotspot password

#define IR1 34
#define IR2 35
#define LED1 25
#define LED2 26

void setup() {
  Serial.begin(115200);  // <-- Only once
  delay(1000);
  Serial.println("Starting...");

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  Serial.println("Connecting to WiFi...");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();

  int s1 = digitalRead(IR1);
  int s2 = digitalRead(IR2);

  // IR sensor LOW = object detected
  int slot1_status = (s1 == LOW) ? 1 : 0;
  int slot2_status = (s2 == LOW) ? 1 : 0;

  // Control LEDs
  digitalWrite(LED1, slot1_status);
  digitalWrite(LED2, slot2_status);

  // Send to Blynk Web Dashboard
  Blynk.virtualWrite(V0, slot1_status);
  Blynk.virtualWrite(V1, slot2_status);

  delay(500);
}
