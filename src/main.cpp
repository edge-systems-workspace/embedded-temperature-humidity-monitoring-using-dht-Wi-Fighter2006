#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Piyush Choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads environmental data from a DHT11 sensor
 * and prints validated temperature and humidity values
 * to the Serial Monitor every 2 seconds.
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

    // Read humidity and temperature
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    // STEP 5: Check if reading failed
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Error: Failed to read from DHT11 sensor!");
        delay(2000);
        return;
    }

    // Print formatted output
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %  |  Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    // 2-second delay before next reading
    delay(2000);
}