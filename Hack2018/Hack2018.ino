  int rad = 0;
void setup()
{
  pinMode(27, OUTPUT); //červená
  pinMode(16, OUTPUT); //oranžová
  pinMode(17, OUTPUT); //zelená
  pinMode(22, INPUT); //magnetický senzor
  pinMode(18, OUTPUT); //červená 2
  pinMode(19, OUTPUT); //žlutá 2
  pinMode(23, OUTPUT); //zelená 2
  pinMode(25, OUTPUT); //zel 3
  pinMode(26, OUTPUT); //čer 3
  pinMode(37, INPUT); //magnetický senzor 2
  pinMode(12, INPUT_PULLUP); //tlačítko

  Serial.begin(9600);
}

void loop() {
  digitalWrite(27, HIGH);
  digitalWrite(18, HIGH);
  Serial.print(analogRead(2));
  Serial.println("   1");
  Serial.print(analogRead(37));
  Serial.println("   2");
  if (analogRead(37)>4000)
  {
    zmena1();
    zmenaBack1();
  }
  if (analogRead(2)>4000)
  {
    zmena2();
    zmenaBack2();
  }
  
}

void zmena1()
{
  digitalWrite(27, HIGH);
  digitalWrite(16, HIGH);
  delay(1500);
  digitalWrite(27, LOW);
  delay(500);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);
  delay(4000);

}
void zmenaBack1()
{
  digitalWrite(17, HIGH);
  for (int i = 0; i < 5; i++) {
    digitalWrite(17, LOW);
    delay(200);
    digitalWrite(17, HIGH);
    delay(200);
    digitalWrite(17, LOW);
  }
  digitalWrite(27, HIGH);

}
void zmena2()
{
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  delay(1500);
  digitalWrite(18, LOW);
  delay(500);
  digitalWrite(19, LOW);
  digitalWrite(23, HIGH);
  delay(4000);

}
void zmenaBack2()
{
  digitalWrite(23, HIGH);
  for (int i = 0; i < 5; i++) {
    digitalWrite(23, LOW);
    delay(200);
    digitalWrite(23, HIGH);
    delay(200);
    digitalWrite(23, LOW);
  }
  digitalWrite(18, HIGH);

}
