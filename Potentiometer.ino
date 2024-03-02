// Define the analog pin connected to the potentiometer
const int potPin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the value from the potentiometer
  int sensorValue = analogRead(potPin);

  // Print the sensor value to the serial monitor
  Serial.println(sensorValue);

  // Delay a short time to stabilize readings
  delay(100);
}
