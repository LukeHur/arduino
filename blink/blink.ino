void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);// Make the light to go on
  delay(1000); // wait for 1 second
  digitalWrite(12, LOW); // Make the light to go off
  delay(1000); // keep it off for 1 second
  digitalWrite(12, HIGH); // Make the light to go on 
}
