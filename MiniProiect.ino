#include <Arduino.h>  // Include biblioteca Arduino pentru funcționalitatea de bază

const int irSensor1 = 32;  // Definirea pinului pentru senzorul IR 1
const int irSensor2 = 33;  // Definirea pinului pentru senzorul IR 2
int count = 0;  // Inițializarea contorului de persoane cu valoarea 0

void setup() {
  Serial.begin(9600);  // Inițializarea comunicării seriale la o rată de 9600 de biți pe secundă
  pinMode(irSensor1, INPUT);  // Configurarea pinului senzorului IR 1 ca intrare
  pinMode(irSensor2, INPUT);  // Configurarea pinului senzorului IR 2 ca intrare
}

void loop() {
  int irState1 = digitalRead(irSensor1); // Citirea stării senzorului IR 1
  int irState2 = digitalRead(irSensor2); // Citirea stării senzorului IR 2

  if (irState1 == LOW) {  // Verificarea dacă senzorul IR 1 detectează o intrare (semnal LOW)
    count++;  // Incrementarea contorului de persoane
    Serial.print("Intrare detectată. Număr persoane în încăpere: ");  // Afișarea unui mesaj în Serial Monitor
    Serial.println(count);  // Afișarea numărului de persoane în Serial Monitor
    delay(500);  // Mică întârziere pentru a preveni numărarea multiplă
  }

  if (irState2 == LOW) {  // Verificarea dacă senzorul IR 2 detectează o ieșire (semnal LOW)
    count--;  // Decrementarea contorului de persoane
    if (count < 0) {  // Verificarea dacă numărul de persoane este mai mic decât 0
      count = 0;  // Resetarea contorului la 0 pentru a asigura că nu devine negativ
    }
    Serial.print("Ieșire detectată. Număr persoane rămase în încăpere: ");  // Afișarea unui mesaj în Serial Monitor
    Serial.println(count);  // Afișarea numărului de persoane în Serial Monitor
    delay(500);  // Mică întârziere pentru a preveni numărarea multiplă
  }
}
