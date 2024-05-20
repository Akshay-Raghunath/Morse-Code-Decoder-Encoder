void encodeDot() {
  digitalWrite(ledDotPin, HIGH);  // Light up dot LED
  delay(dotDuration);
  digitalWrite(ledDotPin, LOW);

  morseCode += '.';  // Add dot to Morse code string
  delay(symbolSpace);

  
}
