#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Piyush Choudhary
 * @date 2026-02-20
 */

#include <DHT.h>

#define DHT_PIN 2
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {

    Serial.begin(9600);
    dht.begin();

    Serial.println("=== DHT11 Temperature & Humidity Monitor Initialized ===");
}

void loop() {

    // STEP 4: Read humidity
    float humidity = dht.readHumidity();

    // STEP 4: Read temperature (Celsius)
    float temperature = dht.readTemperature();

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" % | Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    delay(2000);
}