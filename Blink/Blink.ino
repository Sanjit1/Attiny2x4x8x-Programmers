int ledPin = 5; // Attiny 2/4/84
// int ledPin = 6; // Attiny 2/4/85

void setup() {
  pinMode(ledPin, 1);
}

void loop() {
	digitalWrite(ledPin, 1);
	delay(1000);
	digitalWrite(ledPin, 0);
	delay(1000);
}