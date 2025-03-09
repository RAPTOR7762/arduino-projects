const int led = 13;
const int button = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == 0) {
    digitalWrite(led, HIGH);
  }

  if (digitalRead(button) == 1) {
    digitalWrite(led, LOW);
  }
}
