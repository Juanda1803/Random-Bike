int RED = 13;
int GREEN = 12;
int BLUE = 11;

int BUTTON = 2;

int STATE = LOW;

void setup()
{
  pinMode(BUTTON, OUTPUT);
  pinMode(RED, INPUT);
  pinMode(GREEN, INPUT);
  pinMode(BLUE, INPUT);
}

void loop()
{
  while (digitalRead(BUTTON) == LOW)
  {
  }

  STATE = digitalRead(RED);
  digitalWrite(RED, !STATE);

  STATE = digitalRead(RED);
  digitalWrite(GREEN, !STATE);

  while (digitalRead(BUTTON) == HIGH)
  {
  }
}