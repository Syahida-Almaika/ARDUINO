# 03

BETANDTEILE:
+ LED
+ 220 - OHM -WIDRESTAND
+ TEMPERATURFÜHLER

###### Seite 42

### Projekt 03
# LOVE-O-METER
### MACHE AUS DEINEM ARDUINO EIN LIEBESTHERMOMETER. MIT EINEM ANALOGE EINGANG MISST DU, WIE HEIß DU WIRKLICH BIST!

#### Entdecke: Analoge Eingänge, Verwndung des seriellen Monitors
Zeit : 45 Minuten
Niveau: 1
Basierend auf Projekten: 1, 2

Obwohl Schalter und Taster großartig sind, gibt es viel mehr in der physikalischen Welt, als nur ein und aus.
Obwohl der ARDUINO ein digitales Werkzeug ist, kann eer Informationen von analogen Sensoren erfassen, um Dinge wie Temperatur oder Licht zu messen.
Dazu verwendest du im ARDUINO intregrierten Analog-Digita-Konvernter (ADC).
Die analoge Einträge A0-A5 liefern Werte zwischen o - 1023, was 0V bis 5V Spannung entspricht.

Du verwendest einen Temperaturfühler zur Messung, wie wrm deine Haut ist.
Dieses Bauteil gibt anhängig von der gefühlten Temperatur eine sich ndernde Spannung aus. es hat drei Pins:
einer wird mit der Erdung verbunden, ein weiterer Strom und ein Dritter, der die Variable Spannung angibt, mit deinem ARDUINO.
Im Sketch dieses Projekts wirst du die Messwertedes Sensors auslesen und dazu benutzen, LEDs als Anzeige deiner Temperatur ein- und auszuschaltung.
Es gibt unterschiedliche Modelle von Temperaturfühlern.
Diese Modell, der TMP36, ist praktich, weil sich seine ausgehende Spannung dirkt proportional zur Temperatur in Grad Celcius verhält.

Die ARDUINO-IDE verfügt über einen sogenannten seriellen Monitor, mit dem man Ergebnisse vom Microcontroller während der Programmausführung überbewachen kann.
Dadurch erhälts du fortwährend einen Überblick über den Status deiner Sensoren und du kannst nachvollziehen, was in deinem Schaltkreis geschieht.

###### Seite 43

### Pojekt 03 - Love-O-Meter
## BAUE DEN SCHALTKREIS

In diesem Projekt kannst musst du zuerst die Umgebungstemperatur messen, bevor du fortfahren kannst.
Du überprüfst das im Moment noch manuell, aber das ließe sich auch durch die Kalibrierung erreichen.
Man könnte z.B. einen Schalter dazu einsetzen, auf Knopfdruck die Ausgangstemperatur festzuhalten, oder man könnte den ARDUINO vor dem [loop()] ein paar Probemessungen durchführen lassen, um diese als Refenrenz zu verwenden.
Projekt 6 geht hierzu mehr ins Detail.
Du kannst dir auch das Kalibrierungsbeispiel anschauen, das mit der Software mitgeliefert wird:


###### Seite 34
