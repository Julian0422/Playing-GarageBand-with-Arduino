#include "Keyboard.h"

const int c = 2;
const int cs = 9;
const int d = 3;
const int ds = 10;
const int e = 4;
const int f =5;
const int fs = 11;
const int g = 6;
const int gs = 12;
const int a = 7;
const int as = A0;
const int b = 8;
const int x = A1;
const int z = A2;
const int TAB = A3;

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
  
  pinMode(c, INPUT);
  digitalWrite(c,HIGH);

  pinMode(cs, INPUT);
  digitalWrite(cs,HIGH);
  
  pinMode(d, INPUT);
  digitalWrite(d,HIGH);

  pinMode(ds, INPUT);
  digitalWrite(ds,HIGH);

  pinMode(e, INPUT);
  digitalWrite(e,HIGH);
  
  pinMode(f, INPUT);
  digitalWrite(f,HIGH);

  pinMode(fs, INPUT);
  digitalWrite(fs,HIGH);
  
  pinMode(g, INPUT);
  digitalWrite(g,HIGH);

  pinMode(gs, INPUT);
  digitalWrite(gs,HIGH);
  
  pinMode(a, INPUT);
  digitalWrite(a,HIGH);

  pinMode(as, INPUT);
  digitalWrite(as,HIGH);
  
  pinMode(b, INPUT);
  digitalWrite(b,HIGH);

  pinMode(z, INPUT);
  digitalWrite(z, HIGH);

  pinMode(x, INPUT);
  digitalWrite(x,HIGH);

  pinMode(TAB, INPUT);
  digitalWrite(TAB,HIGH);
  Keyboard.end();
}

void loop() {
  if (digitalRead(c) == HIGH) {
    Keyboard.press('a');
  }else{
    Keyboard.release('a');
  }
  if (digitalRead(cs) == HIGH) {
    Keyboard.press('w');
  }else{
    Keyboard.release('w');
  }
  if (digitalRead(d) == HIGH) {
    Keyboard.press('s');
  }else{
    Keyboard.release('s');
  }
  if (digitalRead(ds) == HIGH) {
    Keyboard.press('e');
  }else{
    Keyboard.release('e');
  }
  if (digitalRead(e) == HIGH) {
    Keyboard.press('d');
  }else{
    Keyboard.release('d');
  }
  if (digitalRead(f) == HIGH) {
    Keyboard.press('f');
  }else{
    Keyboard.release('f');
  }
  if (digitalRead(fs) == HIGH) {
    Keyboard.press('t');
  }else{
    Keyboard.release('t');
  }
  if (digitalRead(g) == HIGH) {
    Keyboard.press('g');
  }else{
    Keyboard.release('g');
  }
  if (digitalRead(gs) == HIGH) {
    Keyboard.press('y');
  }else{
    Keyboard.release('y');
  }
  if (digitalRead(a) == HIGH) {
    Keyboard.press('h');
  }else{
    Keyboard.release('h');
  }
  if (digitalRead(as) == HIGH) {
    Keyboard.press('u');
  }else{
    Keyboard.release('u');
  }
  if (digitalRead(b) == HIGH) {
    Keyboard.press('j');
  }else{
    Keyboard.release('j');
  }
  if (digitalRead(x) == HIGH) {
    Keyboard.press('x');
  }else{
    Keyboard.release('x');
  }
  if (digitalRead(z) == HIGH) {
    Keyboard.press('z');
  }else{
    Keyboard.release('z');
  }
  if (digitalRead(TAB) == HIGH) {
    Keyboard.press(KEY_TAB);
  }else{
    Keyboard.release(KEY_TAB);
  }
}
