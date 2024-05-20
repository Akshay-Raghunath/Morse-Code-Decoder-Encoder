void encodeSpace(){
  digitalWrite(ledspacePin,HIGH);
  delay(spaceDuration);
  digitalWrite(ledspacePin,LOW);

  morseCode += '*';
  delay(symbolSpace);
}
