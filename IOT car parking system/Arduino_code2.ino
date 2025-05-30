#include <Servo.h>

Servo servo;

const int trigPin = 11;
const int echoPin = 12;

// Variables for ultrasonic sensor
long duration;
int distance;

void setup() {
  // Attach the servo to pin 13 and set initial position
  servo.attach(13);
  servo.write(180);
  delay(2000);

  // Initialize serial communication
  Serial.begin(9600);

  // Configure ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo response
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Print distance to serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Control servo based on distance
  if (distance <= 25) { // Adjust threshold as needed
    servo.write(180);   // Open gate
    delay(3000);        // Wait 3 seconds
  } else {
    servo.write(90);    // Close gate
  }
}
