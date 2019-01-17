const int PT = 13;
const int PU = 12;
const int PB = 10;
const int PS = 11;

const int HT = 2;
const int KT = 3;
const int MT = 4;

const int HU = 6;
const int KU = 7;
const int MU = A5;

const int HB = A4;
const int KB = A3;
const int MB = A2;

const int HS = A1;
const int KS = A0;
const int MS = 5;

int Sp = 9;
String data, data1, data2, data3, data4, data5, pause1;

void setup() {
  // put your setup code here, to run once:
pinMode(PT, INPUT);
pinMode(PU, INPUT);
pinMode(PB, INPUT);
pinMode(PS, INPUT);

pinMode(HT, OUTPUT);
pinMode(KT, OUTPUT);
pinMode(MT, OUTPUT);

pinMode(HU, OUTPUT);
pinMode(KU, OUTPUT);
pinMode(MU, OUTPUT);

pinMode(HB, OUTPUT);
pinMode(KB, OUTPUT);
pinMode(MB, OUTPUT);

pinMode(HS, OUTPUT);
pinMode(KS, OUTPUT);
pinMode(MS, OUTPUT);
Serial.begin(9600);
}

/*void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    data += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}*/


void loop() {
  //digitalWrite(MT, HIGH);
  //normal;

  if (PT == HIGH){
  digitalWrite(HT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  }
  
  else if (PU == HIGH){
  digitalWrite(HU, HIGH);
  digitalWrite(MT, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  }

  else if (PB == HIGH){
  digitalWrite(HB, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MT, HIGH);
  digitalWrite(MS, HIGH);
  }

  else if (PS == HIGH){
  digitalWrite(HS, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MT, HIGH);
  digitalWrite(MB, HIGH);
  }

  else goto LANJUT1;

LANJUT1:
  digitalWrite(KS, LOW);
  digitalWrite(HT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MT, LOW);
  digitalWrite(HS, LOW);
  delay (5000);
  digitalWrite(HT, LOW);
  digitalWrite(KT, HIGH);
  delay (750);
  digitalWrite(KT, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(HU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MU, LOW);
  digitalWrite(HT, LOW);
  delay (5000);
  digitalWrite(HU, LOW);
  digitalWrite(KU, HIGH);
  delay (750);
  digitalWrite(KU, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(HB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MB, LOW);
  digitalWrite(HU, LOW);
  delay (5000);
  digitalWrite(HB, LOW);
  digitalWrite(KB, HIGH);
  delay (750);
  digitalWrite(KB, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(HS, HIGH);
  digitalWrite(MS, LOW);
  digitalWrite(HB, LOW);
  delay (5000);
  digitalWrite(HS, LOW);
  digitalWrite(KS, HIGH);
  delay (750);
  
  Serial.println("normal");
}
void normal(){
  
  digitalWrite(KS, LOW);
  digitalWrite(HT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MT, LOW);
  digitalWrite(HS, LOW);
  delay (5000);
  digitalWrite(HT, LOW);
  digitalWrite(KT, HIGH);
  delay (750);
  digitalWrite(KT, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(HU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MU, LOW);
  digitalWrite(HT, LOW);
  delay (5000);
  digitalWrite(HU, LOW);
  digitalWrite(KU, HIGH);
  delay (750);
  digitalWrite(KU, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(HB, HIGH);
  digitalWrite(MS, HIGH);
  digitalWrite(MB, LOW);
  digitalWrite(HU, LOW);
  delay (5000);
  digitalWrite(HB, LOW);
  digitalWrite(KB, HIGH);
  delay (750);
  digitalWrite(KB, LOW);
  digitalWrite(MT, HIGH);
  digitalWrite(MU, HIGH);
  digitalWrite(MB, HIGH);
  digitalWrite(HS, HIGH);
  digitalWrite(MS, LOW);
  digitalWrite(HB, LOW);
  delay (5000);
  digitalWrite(HS, LOW);
  digitalWrite(KS, HIGH);
  delay (750);
}

