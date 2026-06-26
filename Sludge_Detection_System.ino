// ======================================================
// Project: Automated Sludge Detection System
// Developer: Diddi Venkata Vaishnav
// Board: ESP32 Dev Module
// Description:
// This project monitors sludge levels using a sensor
// (simulated using a potentiometer). When the sensor
// value exceeds a predefined threshold, the system
// activates a red LED and a buzzer as an alert.
// Otherwise, a green LED indicates normal conditions.
// ======================================================

// Pin Definitions
#define GREEN_LED 22      // Green LED connected to GPIO22
#define RED_LED 18        // Red LED connected to GPIO18
#define BUZZER 23         // Buzzer connected to GPIO23
#define SENSOR_PIN 35     // Potentiometer output connected to GPIO35

// Threshold value for sludge detection
int threshold = 2000;

void setup() {
  // Configure LEDs and buzzer as outputs
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  // Start serial communication
  Serial.begin(115200);

  // Initially turn OFF all outputs
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop() {

  // Read analog value from the sensor
  int sensorValue = analogRead(SENSOR_PIN);

  // Display sensor value on Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  // Check if sludge level exceeds threshold
  if (sensorValue > threshold) {

    // Sludge detected condition
    Serial.println("Sludge Detected!");

    digitalWrite(RED_LED, HIGH);    // Turn ON red LED
    digitalWrite(GREEN_LED, LOW);   // Turn OFF green LED
    digitalWrite(BUZZER, HIGH);     // Turn ON buzzer
  }
  else {

    // Normal condition
    Serial.println("Water Quality Good");

    digitalWrite(RED_LED, LOW);     // Turn OFF red LED
    digitalWrite(GREEN_LED, HIGH);  // Turn ON green LED
    digitalWrite(BUZZER, LOW);      // Turn OFF buzzer
  }

  // Small delay for stable readings
  delay(500);
}
