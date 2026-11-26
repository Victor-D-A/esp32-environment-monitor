#include <DHT.h>

const int dhtPin = 4;

DHT dht(dhtPin, DHT11);

void setup() {
  dht.begin();
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor.");
  }
  // put your main code here, to run repeatedly:

}
