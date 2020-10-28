# RAUMSCHIFF-STEUERZENTRALE
### DEIN ARDUINO WIRD ZUM MITTELPUNKT IN EINEM SCIENCE-FICTION-FILM

#### Entdecke: digitaler Eingang und Ausgang, Dein erstes Programm, Variablen
Zeit: 45 MINUTEN; 
Niveau: 1; 
Basierend auf Projekten: 1

Nun,da du die Grundlagen der Elekrizität beherrscht, wird es Zeit, mit Deinem ARDINO Dinge zu steuern.
Das Ergebnis des Projekts wird ein Bedienelment mit Schaltern und Lichtern sein, das genauso gut das zentrale Steuerpunkt in einem Science-Fiction-Film hätte sein können.
Hier bist du derjenige, der entscheidet, ob die Lichter "Hyperdrive aktivieren" oder "Laser abfeuern!" bedeuten.
Auf der Konsole wird eine grüne LED leuchten, bist du eine Taste drückst.
Das sendet dem ARDUINO das Signal, das grüne Licht auszuschalten, und zwei andere Lichter blinken zu lassen.

Die digitalen Pins des ARDUINO können nur zwei eingehende Zustände lesen:
Spannung liegt an oder nicht.
Üblicherweise werden diese Art von Eingang digital (oder manchmal binär, von zwei Zustände) und diese ZuständeHIGH & LOW genannt.
HIGH entspricht dir dabei zu sagen "Hier liegt Spannung an!" und LOW deutet "Auf diesem Pin liegt keine Spannung an!".
Wenn du einen AUSGANG mit dm Befehl digitalWrite() auf HIGH setzt, schaltest du ihn ein.
Wenn du nun die Spannung zwischen dem Pin und er Erdung misst, sollte sie 5V betragen.
Wenn du den AUSGANG auf LOW setzt, schaltest du ihn aus.

Die digitalen Pins des ARDUINO können sowohl als Einträge, als auch als Ausgänge dienen, was durch die Konfigurationn deines Programmes festgelegt wird.
Konfigurierst du die Pins als Ausgänge, können sie Bauteile, wie LEDs einschalten.
Wenn du die Pins als Eingänge konfigurierst, lönnen sie überprüfen, ob ein Schalter betätigt wurde, oder nicht.
Da die Pins 0 und 1 für die Kommunikation mit dem Computer verwndet werden, ist es am Besten, mit Pin 2 zu beginnen.

###### Seitet 33



### Pojekt2 - Raumschiff-Steuerzentrale
## BAUE DEN SCHALTKREIS

1.) Verdrahte deine Steckpatine mit 5V und der Erdung des ARDUINO, genau wie beim vorherigen Projekt.
Setze 2 rote LEDs und eine grüne auf die Steckplatine und verbinde jewils die Kathode (kurzer Stift) der LEDs über einen 220 Ohm Widerstand mit der Erdung. Schließe die Anode (langer Stift) der grünen LED an Pin 3 an.
Schließe die Andoden der roten LEDs an Pin 4 beziehungsweise Pin 5.

2.) Setzte den Taster auf die Steckplatine, so wie dues zuvor auch getan hast.
Schließe eine Seite an Strom und die andere Seite am digitalen Pin 2des ARDUINO an.
Außerdem musst du einen 10-kOhm-Widerstan zwischen der Erdung und dem Pin des Tasters, der mit dem ARDUINO verbunden ist, einsetzen.
Dieser Pull-Down-Widerstand verbindet den Pin mit der Erdung solange der Taster geöffnet ist, damit er LOW liest, wenn keine Spannung durch den Taster hindurch kommt.



### PROJET 02 - aumschiff-Steuerzentrale
## BENUTZE ES

Sobald dein ARDUINO programmiert ist, solltest du das grüne Licht leuchten sehen.
Wenn du den Taster betätigst, fangen die roten Lichter an zu blinken, und das grüne Licht erlischt.
Probiere zwei unterschiedliche Zeiten für zwie delay()-Funktionen aus und betrachte, was mit den Lichtern passiert und wie sich die Antwort des Systems abhängig von der Geschwindigkeit des Blinkens ändert.
Wenn du delay() in deinem Programm ausrufst, wird alle andere Funktionalität gestoppt.
Krinr Sensor-Messwerte werden elesen, bis die Zeit abgelaufen ist.
Verzögerungen sind häufig nützlich, pass jedoch beim Entwurf deiner Projekte auf. dass diese nicht unnötig deine Schnittstelle behindern.

Wie könnstest du deine roten LEDs blinken lassen, sobald das Programm startet?
Wie könnstest du mit Schaltern und LEDs eine größere, omplexere Steuerkonsole für deine interstellaren Abenteuer bauen?

Wenn du mit der Umsetzung deiner Steuerkonsole biginnst, versuche auch immer die Erwartungen zur Bedienung, die andre Personen haben könnten, mit einzubeziehen.
Wenn man eine Taste drückt, möchte man dann ein unmittelbares Feedback, oder sollte es eie Verzögerung geben?
Versuche dich also bei der Entwicklung deines Designs in die Situation eines anderen Benutzers hinein zu versetzen und schaue, ob deine Erwartungen der Realität entsprechen.

### In diesem Projekt hat du dein ersten ARDUINO-Programm erstellt, um das Verhalten von LEDs mit einem Schalter zu steuern. Du hast den Einsatz von Variablen, if()...else- Statements, sowie Funktionen zum Lesen und Schreiben von Ein- und Asugängen kennengelernt.

###### Seite 40
