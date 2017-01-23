void setup() {
  Serial.begin(9600); // set serial connection at baud rate at 9600
  pinMode (9, OUTPUT); // set pin 9 to output
}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // increase the lightValue until 255
    analogWrite(9, lightValue); // Set the brightness of LED lightValue
    Serial.println(lightValue); // print lightValue to the serial monitor
    delay(10); // wait for ten millisecond
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // decrease the lightValue until 0
    analogWrite(9, lightValue); // Set the brightness of LED lightValue
    Serial.println(lightValue); // print lightValue to the serial monitor
    delay(10); // wait for ten millisecond
  }
}
