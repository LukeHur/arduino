void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, I'm nice");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.readString() == "On") {
  digitalWrite(13, HIGH);
  }
  else if (Serial.readString() == "Off") {
  digitalWrite(13, LOW);
  }
}
