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

[Kalibration](https://www.arduino.cc/en/calibration) 

###### Seite 34

1.) Verbinde deine Steckplatine mit Strom und Erdung, wie du es in den vorherigen Projekten getan hast.

2.) Verbinde jewils die Kathode (kurzer Stift) der verwendeten LEDs über einen 220-Ohm-Widerstand mit der Erdung.
Schließe jeweils die Andoden der LEDs an den Pin2 bis 4.
Das sind die Anzeigen für das Projekt.

3.) Setzte den TMP36, wie in Abbildung 2 gezeigt, mit der abgreundeten Fläche vom ARDUINO abgewandt auf die Steckplatine (die Reihenfolge der Pins ist wichtig!).
Schließe den linken Pin der flachen Seite am Strom, den rechten an der Erdung an.
Schließe den mittleren Pin an Pin!0 vom ARDUINO an.
Das ist der analoge Eingang 0.

Baue eine Schnittstelle für den Sensor, damit Personen damit interagieren können.
Ein Papierausschnitt in der Form einer Hand ist ein guter Hinweisgeber.
Wenn du dein Glück herausfördern möchtest, bastle ein paar Lippen, die man küssen kann, und schau, wie dies die Lichter anfeuert!
Du kannst die LEDs auch bescgriften, um ihnen eine edeutung zu geben.
Vielleicht bedeutet eine LED, dass du eiskalt bist, zwei LEDs, dass du warmherzig und freundlich bist, und drei LEDs, dass du einen zum Schmelzen bringst!

1.) Schneide ein Stück Papier aus, das über die Steckplatine passt.
Zeichne ein paar Lippen dort, wo der Sensor sein wird, und schneide Kreise für die LEDs aus.

2.) Plaziere das ausgeschnittene Papier so auf der Steckplatine, dass die Lippen den Sensor bedecken und LEDs durch die ausgeschnittenen Kreise heraus gucken.
Drück auf die Lippen, um zu sehen, wie heiß du bist!
