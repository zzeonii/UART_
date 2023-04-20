int b;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    b = Serial.read();
  }
  if (b == LOW) {
    digitalWrite(12, HIGH);
  }
  if (b = HIGH) {
    digitalWrite(12, LOW);
  }
}
