#include <IRremote.hpp>;

int bu = 8;
int melody[] = {2, 2, 3, 2, 5, 4, 
                2, 2, 3, 2, 6, 5, 
                2, 2, 9, 7, 5, 4, 3, 2, 
                9, 9, 7, 5, 6, 5};
                
int melodyB[] = {6, 6, 5, 4, 
                 6, 6, 5, 4, 
                 6, 7, 6, 5, 3, 4};
                 
int melodyC[] = {4, 4, 4, 6, 5, 3, 
                 3, 3, 3, 5, 4, 2, 
                 4, 3, 2, 2, 6, //6, 5, 5 = 8, 9, 9 
                 3, 2, 5, 5, 7, 
                 4, 4, 4, 6, 5, 3};
                 
int notes[] = {0, 10, 444, 498, 559, 592, 665, 743, 790, 888};
int btn = 1;
int enabled = 0;
int birthdayState = LOW;
int baloonState = LOW;
int donaState = LOW;

 void playA(){
    IrReceiver.stop();
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
    noTone(bu);
    Serial.println("Acabou");
    IrReceiver.start();
  }
  void playB(){
    IrReceiver.stop();
    Serial.println("Começou");
    tone(bu, notes[melodyB[0]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[1]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyB[2]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[3]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyB[4]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[5]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyB[6]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[7]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyB[8]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[9]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyB[10]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyB[11]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyB[12]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyB[13]]);
    delay(1000);
    noTone(bu);
    Serial.println("Acabou");
    IrReceiver.start();
  }
  void playC(){
    IrReceiver.stop();
    Serial.println("Começou");
    tone(bu, notes[melodyC[0]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[1]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[2]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[3]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[4]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyC[5]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyC[6]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[7]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[8]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[9]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[10]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyC[11]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyC[12]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[13]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[14]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[15]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[16]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[17]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyC[18]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[19]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[20]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[21]]);
    delay(750);
    noTone(bu);
    tone(bu, notes[melodyC[22]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[23]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[24]]);
    delay(450);
    noTone(bu);
    tone(bu, notes[melodyC[25]]);
    delay(300);
    noTone(bu);
    tone(bu, notes[melodyC[26]]);
    delay(1000);
    noTone(bu);
    Serial.println("Acabou");
    IrReceiver.start();
  }
void setup() {
  pinMode(bu, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
     Serial.begin(115200);
    while (!Serial)
        ; // Wait for Serial to become available. Is optimized away for some cores.

    // Just to know which program is running on my Arduino
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));

    // Start the receiver and if not 3. parameter specified, take LED_BUILTIN pin from the internal boards definition as default feedback LED
    IrReceiver.begin(4, ENABLE_LED_FEEDBACK);

    Serial.print(F("Ready to receive IR signals of protocols: "));
    printActiveIRProtocols(&Serial);
}

void loop() {
  int btnState = digitalRead(btn);
    if (IrReceiver.decode()) {

        /*
         * Print a summary of received data
         */
        if (IrReceiver.decodedIRData.protocol == UNKNOWN) {
            Serial.println(F("Received noise or an unknown (or not yet enabled) protocol"));
            // We have an unknown protocol here, print extended info
            IrReceiver.printIRResultRawFormatted(&Serial, true);
            IrReceiver.resume(); // Do it here, to preserve raw data for printing with printIRResultRawFormatted()
        } else {
            IrReceiver.resume(); // Early enable receiving of the next IR frame
            IrReceiver.printIRResultShort(&Serial);
            IrReceiver.printIRSendUsage(&Serial);
        }
        Serial.println();

        /*
         * Finally, check the received data and perform actions according to the received command
         */
        if (IrReceiver.decodedIRData.command == 0x45) {
            // do something
            Serial.println("1");
            birthdayState = HIGH;
        } else if (IrReceiver.decodedIRData.command == 0x46) {
            // do something else
            Serial.println("2");
            baloonState = HIGH;
        }
        else if (IrReceiver.decodedIRData.command == 0x47) {
            // do something else
            Serial.println("3");
            donaState = HIGH;
        }
        else if (IrReceiver.decodedIRData.command == 0x44) {
            // do something else
            Serial.println("4");
        }
        else if (IrReceiver.decodedIRData.command == 0x40) {
            // do something else
            Serial.println("5");
        }
        else if (IrReceiver.decodedIRData.command == 0x43) {
            // do something else
            Serial.println("6");
        }
        else if (IrReceiver.decodedIRData.command == 0x7) {
            // do something else
            Serial.println("7");
        }
        else if (IrReceiver.decodedIRData.command == 0x15) {
            // do something else
            Serial.println("8");
        }
        else if (IrReceiver.decodedIRData.command == 0x9) {
            // do something else
            Serial.println("9");
        }
        else if (IrReceiver.decodedIRData.command == 0x16) {
            // do something else
            Serial.println("*");
        }
        else if (IrReceiver.decodedIRData.command == 0x19) {
            // do something else
            Serial.println("0");
        }
        else if (IrReceiver.decodedIRData.command == 0xD) {
            // do something else
            Serial.println("#");
        }
        else if (IrReceiver.decodedIRData.command == 0x18) {
            // do something else
            Serial.println("↑");
        }
        else if (IrReceiver.decodedIRData.command == 0x52) {
            // do something else
            Serial.println("↓");
        }
        else if (IrReceiver.decodedIRData.command == 0x8) {
            // do something else
            Serial.println("←");
        }
        else if (IrReceiver.decodedIRData.command == 0x5A) {
            // do something else
            Serial.println("→");
        }
        else if (IrReceiver.decodedIRData.command == 0x1C) {
            // do something else
            Serial.println("OK");
        }
    }
  if(birthdayState == HIGH){
    baloonState = LOW;
    donaState = LOW;
    playA();
    delay(500);
    birthdayState = LOW;
  }
  if(baloonState == HIGH){
    birthdayState = LOW;
    donaState = LOW;
    playB();
    delay(500);
    baloonState = LOW;
  }
  if(donaState == HIGH){
    birthdayState = LOW;
    baloonState = LOW;
    playC();
    delay(500);
    donaState = LOW;
  }
}
