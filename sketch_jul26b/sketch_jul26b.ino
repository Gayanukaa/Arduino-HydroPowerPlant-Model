int outRelay1 = 13;
int outRelay2 = 12;
int outRelay3 = 11;
int outRelay4 = 10;

int inRelay1 = 7;
int inRelay2 = 6;
int inRelay3 = 5;
int inRelay4 = 4;

void setup() {
    pinMode(outRelay1, OUTPUT);
    pinMode(outRelay2, OUTPUT);
    pinMode(outRelay3, OUTPUT);
    pinMode(outRelay4, OUTPUT);

    pinMode(inRelay1, OUTPUT); 
    pinMode(inRelay2, OUTPUT);
    pinMode(inRelay3, OUTPUT);
    pinMode(inRelay4, OUTPUT);
}

void loop() {
    digitalWrite(outRelay1, HIGH);
    digitalWrite(outRelay2, LOW);
    digitalWrite(outRelay3, LOW);
    digitalWrite(outRelay4, LOW);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, HIGH);

    delay(500);

    digitalWrite(outRelay1, LOW);
    digitalWrite(outRelay2, HIGH);
    digitalWrite(outRelay3, LOW);
    digitalWrite(outRelay4, LOW);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, HIGH);
    digitalWrite(inRelay4, LOW);

    delay(500);

    digitalWrite(outRelay1, LOW);
    digitalWrite(outRelay2, LOW);
    digitalWrite(outRelay3, HIGH);
    digitalWrite(outRelay4, LOW);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, HIGH);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, LOW);

    delay(500);

    digitalWrite(outRelay1, LOW);
    digitalWrite(outRelay2, LOW);
    digitalWrite(outRelay3, LOW);
    digitalWrite(outRelay4, HIGH);

    digitalWrite(inRelay1, HIGH);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, LOW);

    delay(500);
}