//https://www.tinkercad.com/things/2JgiVnnB5oi-smooth-hango-waasa/editel?tenant=circuits

//arduino code for four channel four way relay  where each channel is connected to 4 LEDs in parallel and pins of arduino board utilized four 4 relays are pins 13,12,11,10. Realy should work to produce a wave motion
//For the 16 LEDs connected pin 10 connected to LEDs 1,5,9,13; pin 11 connected to LEDs 2,6,10,14; pin 12 connected to LEDs 3,7,11,15; pin 13 connected to LEDs 4,8,12,16

int relay1 = 13;
int relay2 = 12;
int relay3 = 11;
int relay4 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, HIGH);
  delay(500);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, LOW);
  delay(500);
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  delay(500);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  delay(500);
}

// Path: MainCode.ino