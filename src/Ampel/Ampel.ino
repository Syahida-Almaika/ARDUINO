int switchState = 0;
int GREEN=3;
int RED=4;
int RED2=5;

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
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(RED2, LOW);
  }
  else { // der Schalter wird gedrückt
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, LOW);
    digitalWrite(RED2, HIGH);
    delay(250); // Warte ine Viertelsekunde
    // Schalte die LED´s um
    digitalWrite(RED, HIGH);
    digitalWrite(RED2, LOW);
    delay(250); // Warte eine Viertelsekunde
  }
} // Beginne von vorne mit der Schleife
