
void setup()
{
  pinMode(27, OUTPUT); //červená
  pinMode(16, OUTPUT); //oranžová
  pinMode(17, OUTPUT); //zelená
  pinMode(39, INPUT); //magnetický senzor OMG
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
                  zmena();
                  zmenaBack();
                }
              }
            }
          }
        }
      }
    }
  }
}

void zmena()
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
  delay(500);
  digitalWrite(27, LOW);
  delay(500);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);

}
void zmenaBack()
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
