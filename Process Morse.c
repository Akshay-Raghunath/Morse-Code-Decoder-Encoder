void processMorseCode() {
  digitalWrite(ledProcessPin, HIGH);  // Light up process LED
//Serial.println(morseCode); 
 char character = Decode(morseCode);
 Serial.print(character);
  // You can implement Morse code decoding logic here
  // (This section is not provided as it requires a Morse code lookup table)

  delay(1500);  // Display processed code for 3 seconds
  digitalWrite(ledProcessPin, LOW);
  morseCode="";
}
