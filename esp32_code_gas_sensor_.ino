// ================= PIN DEFINITIONS =================
#define GAS_SENSOR_PIN 34   // MQ sensor AO / Potentiometer middle pin
#define BUZZER_PIN 25
#define LED_PIN 26
// #define SERVO_PIN 27      // Uncomment ONLY if using servo

// ================= THRESHOLD =================
// Adjust this value after testing
int GAS_THRESHOLD = 1800;

// ================= VARIABLES =================
int gasValue = 0;

// ================= OPTIONAL SERVO =================
// #include <Servo.h>
// Servo gasServo;

void setup() {
  Serial.begin(9600);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  // Uncomment only if servo is connected
  // gasServo.attach(SERVO_PIN);
  // gasServo.write(0);  // Gas ON position

  Serial.println("LPG Gas Leak Detection System Started");
}

void loop() {
  gasValue = analogRead(GAS_SENSOR_PIN);

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue > GAS_THRESHOLD) {
    // GAS LEAK DETECTED
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    // Uncomment if servo is used
    // gasServo.write(90);  // Gas OFF position

    Serial.println("⚠️ GAS LEAK DETECTED!");
    Serial.println("Gas cut-off triggered (simulated)");
  } 
  else {
    // SAFE CONDITION
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

    // Uncomment if servo is used
    // gasServo.write(0);   // Gas ON position

    Serial.println("Gas level safe");
  }

  delay(1000); // 1 second delay
}
