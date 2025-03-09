const int led = 9;
int fadeAmt = 5
int br; // Brightness of the led

void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  analogWrite(led, br);
  br = br + fadeAmt;

  if (br <= 0 || br >= 255) {
    fadeAmt = - fadeAmt;
  }
  delay(300);
