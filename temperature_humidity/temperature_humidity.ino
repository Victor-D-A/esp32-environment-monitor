#include <DHT.h>

const int dhtPin = 4;

DHT dht(dhtPin, DHT11);

void setup() {
  dht.begin();
  Serial.begin(115200);
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor.");
    delay(2000);
    return;
  }

  if (humidity < 0 || humidity > 100) {
    Serial.println("The humidity measurement is invalid.");
    delay(2000);
    return;
  }

  if (temperature < 0 || temperature > 50) {
    Serial.println("Temperature reading outside acceptable range.");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000);
}
