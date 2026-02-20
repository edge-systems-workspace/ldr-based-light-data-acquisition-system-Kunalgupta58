#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Kunal Gupta
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */
 // TODO 1: Define LDR analog pin (Use A0)
 #define LDR_PIN A0

 // TODO 2: Create variable to store sensor reading
 int ldrValue = 0;

 // Optional: Define brightness threshold
 const int LIGHT_THRESHOLD = 500;
 

void setup() {
   // TODO 3: Initialize Serial communication
    Serial.begin(9600);

    // TODO 4: Print system initialization message
    Serial.println("=================================");
    Serial.println("   LDR Light Monitoring System   ");
    Serial.println("   System Initialized Successfully");
    Serial.println("=================================");
}

void loop() {

    // TODO 5: Read analog value from LDR
    ldrValue = analogRead(LDR_PIN);

    // TODO 6: Print raw ADC value
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    // TODO 7: Apply threshold logic
    if (ldrValue > LIGHT_THRESHOLD) {

        // TODO 8: Print brightness status
        Serial.println("Status: BRIGHT Environment");
    } 
    else {
        Serial.println("Status: DARK Environment");
    }

    Serial.println("---------------------------------");

    // TODO 9: Add delay
    delay(1000);
}
