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

// STEP 2: Create DHT object
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {

    // Initialize Serial communication
    Serial.begin(9600);
}

void loop() {
}