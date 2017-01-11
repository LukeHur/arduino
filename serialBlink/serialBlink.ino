void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);// Make the light to go on
  delay(1000); // wait for 1 second
  digitalWrite(13, LOW); // Make the light to go off
  delay(1000); // keep it off for 1 second
}
