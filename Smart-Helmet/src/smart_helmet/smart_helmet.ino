/*
  Smart Helmet Project - Arduino
  Features:
  - Helmet detection using switch
  - Alcohol detection (MQ3 sensor)
  - Accident detection (vibration sensor)
  - Buzzer alert if conditions not met
*/

#define HELMET_SWITCH 2   // Helmet worn detection
#define ALCOHOL_PIN A0    // MQ3 sensor
#define VIBRATION_PIN 3   // Accident detection sensor
#define BUZZER_PIN 7

int alcoholValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(HELMET_SWITCH, INPUT_PULLUP);
  pinMode(VIBRATION_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int helmetStatus = digitalRead(HELMET_SWITCH); // 0 = helmet worn
  alcoholValue = analogRead(ALCOHOL_PIN);
  int vibrationStatus = digitalRead(VIBRATION_PIN);

  Serial.print("Helmet: ");
  Serial.print(helmetStatus == LOW ? "Worn" : "Not Worn");
  Serial.print(" | Alcohol: ");
  Serial.print(alcoholValue);
  Serial.print(" | Vibration: ");
  Serial.println(vibrationStatus);

  // Rules
  if (helmetStatus == HIGH) {
    // Helmet not worn
    digitalWrite(BUZZER_PIN, HIGH);
  } else if (alcoholValue > 400) {
    // Alcohol detected
    digitalWrite(BUZZER_PIN, HIGH);
  } else if (vibrationStatus == HIGH) {
    // Accident detected
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(500);
}
