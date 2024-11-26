#define SENSOR_PIN 3    // Pin de datos del SS49E
#define THRESHOLD 3000  // Umbral para detectar el imán
#define BUZZER 0

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // Leer el valor analógico del sensor SS49E
  int sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue);

  if (sensorValue < THRESHOLD) {
    buzzerAlert();
  }
}

void buzzerAlert() {
  digitalWrite(BUZZER, HIGH);
  delay(50);
  digitalWrite(BUZZER, LOW);
  delay(50);
}