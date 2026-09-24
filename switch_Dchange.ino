int LED= 13;
int sw=8;
int D1=2000;
int D2=250;
void setup() {
pinMode (LED, OUTPUT);
pinMode (sw, INPUT_PULLUP);
}
void loop() {
int D;
if (digitalRead (sw)==1) { D=D1; }
else{D=D2;}
digitalWrite(LED, 1);
delay(D);
digitalWrite (LED, 0);
delay(D);
}