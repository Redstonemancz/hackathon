
void setup()
{
  pinMode(27, OUTPUT); //červená
  pinMode(16, OUTPUT); //oranžová
  pinMode(17, OUTPUT); //zelená
  pinMode(39, INPUT); //magnetický senzor
  pinMode(18, OUTPUT); //červená 2
  pinMode(19, OUTPUT); //žlutá 2
  pinMode(23, OUTPUT); //zelená 2
  pinMode(38, INPUT); //magnetický senzor 2
  int rad = 0;
  Serial.begin(9600);
}

void loop() {
  digitalWrite(27, HIGH);
  Serial.println(analogRead(39));
  if (analogRead(39) == 0)
  {
    Serial.println(analogRead(39));
    if (analogRead(39) == 0)
    {
      Serial.println(analogRead(39));
      if (analogRead(39) == 0)
      {
        Serial.println(analogRead(39));
        if (analogRead(39) == 0)
        {
          Serial.println(analogRead(39));
          if (analogRead(39) == 0)
          {
            Serial.println(analogRead(39));
            if (analogRead(39) == 0)
            {
              Serial.println(analogRead(39));
              if (analogRead(39) == 0)
              {
                Serial.println(analogRead(39));
                if (analogRead(39) == 0)
                {
                  Serial.println(analogRead(39));
                  int rad = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  digitalWrite(18, HIGH);
  Serial.println(analogRead(38));
  if (analogRead(38) == 0)
  {
    Serial.println(analogRead(38));
    if (analogRead(38) == 0)
    {
      Serial.println(analogRead(38));
      if (analogRead(38) == 0)
      {
        Serial.println(analogRead(38));
        if (analogRead(38) == 0)
        {
          Serial.println(analogRead(38));
          if (analogRead(38) == 0)
          {
            Serial.println(analogRead(38));
            if (analogRead(38) == 0)
            {
              Serial.println(analogRead(38));
              if (analogRead(38) == 0)
              {
                Serial.println(analogRead(38));
                if (analogRead(38) == 0)
                {
                  Serial.println(analogRead(38));
                  if (rad == 1)
                  {
                    zmena();
                  }
                  else
                  {
                    int rad = 2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }

}

void zmena1()
{
  digitalWrite(27, HIGH);
  delay(4000);
  //  for (int i = 0; i < 5; i++) {
  //    digitalWrite(16, HIGH);
  //    digitalWrite(27,LOW);
  //    delay(200);
  //    digitalWrite(27, HIGH);
  //    delay(200);
  //    digitalWrite(27, LOW);
  //  }
  digitalWrite(16, HIGH);
  delay(1500);
  digitalWrite(27, LOW);
  delay(500);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);

}
void zmenaBack1()
{
  digitalWrite(17, HIGH);
  delay(4000);
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
  delay(4000);
  //  for (int i = 0; i < 5; i++) {
  //    digitalWrite(16, HIGH);
  //    digitalWrite(27,LOW);
  //    delay(200);
  //    digitalWrite(27, HIGH);
  //    delay(200);
  //    digitalWrite(27, LOW);
  //  }
  digitalWrite(19, HIGH);
  delay(1500);
  digitalWrite(18, LOW);
  delay(500);
  digitalWrite(19, LOW);
  digitalWrite(23, HIGH);

}
void zmenaBack2()
{
  digitalWrite(23, HIGH);
  delay(4000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(23, LOW);
    delay(200);
    digitalWrite(23, HIGH);
    delay(200);
    digitalWrite(23, LOW);
  }
  digitalWrite(18, HIGH);

}
