Aufgabe 1.1 Bitweise Operatoren (20%):
Die Manipulation einzelner Bits wird bei der Programmierung von Mikrocontrollern sehr häufig benötigt. Aus diesem Grund wollen wir in dieser Aufgabe ein paar Makros implementieren, die diese Manipulation vereinfachen. Sie können diese Makros dann für zukünftige Aufgaben verwenden.
In der Datei bitoperations.h sollen folgende Makros implementiert werden:
	• SB(VALUE, POSITION): setzt das Bit (d.h. das Bit nimmt den Wert 1 an) an der Stelle POSITION.
	• CB(VALUE, POSITION): löscht das Bit (d.h. das Bit nimmt den Wert 0 an) an der Stelle POSITION.
	• IBS(VALUE, POSITION): prüft, ob das bit an der Stelle POSITION gesetzt ist (d.h. ob es den Wert 1 hat).
	• TB(VALUE, POSITION): "toggelt" (hin- und herschalten) das Bit an der Stelle POSITION.
Für die Implementierung dieser Makros benötigen sie die bitweisen Operatoren. Auf Sakai finden Sie auf der Lesson 1 Seite unter Selbststudium entsprechende Links, die die Funktionsweise der bitweisen Operatoren erklären.
Schreiben Sie ausserdem ein kleines Programm (in der Datei main.cpp), das die Verwendung ihrer Makros demonstriert.
![image](https://github.com/claner2804/Embedded-Systems-hw01-01/assets/131294860/a7985d8f-0968-45d6-acbd-7c3fea72a91a)
