int lightValue = 0; // set lightValue to 0
int delta = 1; // set delta to 1

void setup() {
  Serial.begin(9600); // set serial connection at baud rate at 9600
  pinMode (9, OUTPUT); // set pin 9 to output
}

  void loop() {
    lightValue = lightValue + delta; // set the value of lightValue to the sum of lightValue and delta
    if (lightValue <= 0 || lightValue >= 255) { // // increase the lightValue until 255
      delta = -delta; // set delta to negative 
    }
    analogWrite(9, lightValue); // Set the brightness of LED lightValue
    Serial.println(lightValue); // print lightValue to the serial monitor
    delay(10); // wait for ten millisecond
  }
