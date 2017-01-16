void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // start the serial and set the data rate in bits per seconds
  Serial.println("Hello, I'm nice"); // prints data to the serial port as human-readable
  Serial.println("Send 'On' to turn on the LED."); // prints data to the serial port as human-readable
  Serial.println("Send 'Off' to turn off the LED."); // prints data to the serial port as human-readable
  pinMode(13, OUTPUT); // configure pin to act in input or an output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // get the number of characters reading from the serial port
    String command; // create string variable comments
    command = Serial.readString(); // Read string variable 
    if (command == "On") { // the next line are true if the user types "On"
      Serial.println("On"); // say "On" to serial monitor
      digitalWrite(13, HIGH); // turn the light to "on"
    }
    else if (command == "Off") { // the next line are true if the user types "Off"
      Serial.println("Off"); // say "Off" to serial monitor
      digitalWrite(13, LOW); // turn the light to "off"
    } 
  }
}
