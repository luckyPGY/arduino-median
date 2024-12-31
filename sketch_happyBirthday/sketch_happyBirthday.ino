int bu = 8;
int melody[] = {2, 2, 3, 2, 5, 4, 
                2, 2, 3, 2, 6, 5, 
                2, 2, 2, 7, 5, 4, 3, 2, 
                1, 1, 7, 5, 6, 5};
int notes[] = { 0, 261, 293, 329, 349, 392, 440, 493, 523 };

void setup() {
  pinMode(bu, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Começou");
  tone(bu, notes[melody[0]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[1]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[2]]);
  delay(500);
  noTone(bu);
  tone(bu, notes[melody[3]]);
  delay(450);
  noTone(bu);
  tone(bu, notes[melody[4]]);
  delay(450);
  noTone(bu);
  tone(bu, notes[melody[5]]);
  delay(750);
  noTone(bu);
  tone(bu, notes[melody[6]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[7]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[8]]);
  delay(450);
  noTone(bu);
  tone(bu, notes[melody[9]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[10]]);
  delay(450);
  noTone(bu);
  tone(bu, notes[melody[11]]);
  delay(750);
  noTone(bu);
  tone(bu, notes[melody[12]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[13]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[14]]);
  delay(500);
  noTone(bu);
  tone(bu, notes[melody[15]]);
  delay(450);
  noTone(bu);
  tone(bu, notes[melody[16]]);
  delay(500);
  noTone(bu);
  tone(bu, notes[melody[17]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[18]]);
  delay(500);
  noTone(bu);
  tone(bu, notes[melody[19]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[20]]);
  delay(750);
  noTone(bu);
  tone(bu, notes[melody[21]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[22]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[23]]);
  delay(500);
  noTone(bu);
  tone(bu, notes[melody[24]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[25]]);
  delay(300);
  noTone(bu);
  tone(bu, notes[melody[26]]);
  delay(1000);
  Serial.println("Acabou");
}
