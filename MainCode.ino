//https://www.tinkercad.com/things/2JgiVnnB5oi-smooth-hango-waasa/editel?tenant=circuits

//Outlet valve motion - Arduino code for four channel four way relay  where each channel is connected to 4 LEDs in parallel and pins of arduino board utilized four 4 relays are pins 13,12,11,10. Realy should work to produce a wave motion
//For the 16 LEDs connected pin 10 connected to LEDs 1,5,9,13; pin 11 connected to LEDs 2,6,10,14; pin 12 connected to LEDs 3,7,11,15; pin 13 connected to LEDs 4,8,12,16

//Inlet valve motion - Arduino code for four channel four way relay  where each channel is connected to 4 LEDs in parallel and pins of arduino board utilized four 4 relays are pins 4,5,6,7. Realy should work to produce a wave motion
//For the 16 LEDs connected pin 4 connected to LEDs 1; pin 5 connected to LEDs; pin 6 connected to LEDs 3; pin 7 connected to LEDs 4.

int outRelay1 = 13;
int outRelay2 = 12;
int outRelay3 = 11;
int outRelay4 = 10;

int inRelay1 = 7;
int inRelay2 = 6;
int inRelay3 = 5;
int inRelay4 = 4;

void setup() {
    // put your setup code here, to run once:
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
    // put your main code here, to run repeatedl
    /* 
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

    delay(500); */

    digitalWrite(outRelay1, HIGH);
    digitalWrite(outRelay2, HIGH);
    digitalWrite(outRelay3, HIGH);
    digitalWrite(outRelay4, LOW);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, HIGH);

    delay(250);

    digitalWrite(outRelay1, HIGH);
    digitalWrite(outRelay2, HIGH);
    digitalWrite(outRelay3, LOW);
    digitalWrite(outRelay4, HIGH);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, HIGH);
    digitalWrite(inRelay4, LOW);

    delay(250);

    digitalWrite(outRelay1, HIGH);
    digitalWrite(outRelay2, LOW);
    digitalWrite(outRelay3, HIGH);
    digitalWrite(outRelay4, HIGH);

    digitalWrite(inRelay1, LOW);
    digitalWrite(inRelay2, HIGH);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, LOW);

    delay(250);

    digitalWrite(outRelay1, LOW);
    digitalWrite(outRelay2, HIGH);
    digitalWrite(outRelay3, HIGH);
    digitalWrite(outRelay4, HIGH);

    digitalWrite(inRelay1, HIGH);
    digitalWrite(inRelay2, LOW);
    digitalWrite(inRelay3, LOW);
    digitalWrite(inRelay4, LOW);

    delay(250);
    
}

// Path: MainCode.ino