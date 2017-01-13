void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // start the seiral and set the deta rate in bits per seconds 
  Serial.println("Hello, I'm nice"); // prints data to the serial port as human-readable 
  Serial.println("Send 'On' to turn on the LED."); // prints data to the serial port as human-readable 
  Serial.println("Send 'Off' to turn off the LED."); // prints data to the serial port as human-readable 
  pinMode(13, OUTPUT); // configure pin to act in input or an output
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // get the number of characters reading from the serial port 
    String command;
    command = Serial.readString(); // read the message
    if (command == "On") {
      Serial.println("On"); // prints data to the serial port as human-readable 
      digitalWrite(13, HIGH); // enable the digitalWrite
    }
    else if (command == "Off") {
      Serial.println("Off"); // prints data to the serial port as human-readable 
      digitalWrite(13, LOW); // disable the internal pullup on the input pin
    }

  }
}
