int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

// Loop heist immer ausführen
void loop() {
  switchState = digitalRead(2);
  // das ist ein Kommentar
  if (switchState == LOW) {
    // Der Schalter wird nicht gedrückt
    int GREEN=3;
    int YELLOW=4;
    int RED=5;
    
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(RED, LOW);
  }
  else { // der Schalter wird gedrückt
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250); // Warte ine Viertelsekunde
    // Schalte die LED´s um
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // Warte eine Viertelsekunde
  }
} // Beginne von vorne mit der Schleife
