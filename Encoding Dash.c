void encodeDash() {
  digitalWrite(ledDashPin, HIGH);  // Light up dash LED
  delay(dashDuration);
  digitalWrite(ledDashPin, LOW);

  morseCode += '-';  // Add dash to Morse code string
  delay(symbolSpace);

 
}
