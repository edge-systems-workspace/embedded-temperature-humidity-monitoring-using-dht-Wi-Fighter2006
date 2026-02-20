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

    // STEP 3: Initialize DHT sensor
    dht.begin();

    // STEP 3: Print initialization message
    Serial.println("=== DHT11 Temperature & Humidity Monitor Initialized ===");
}

void loop() {
}