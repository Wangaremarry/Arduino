// C++ code
//
int Red=2;
int Amber=4;
int Blue=7;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Amber, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop()
{
  digitalWrite(Red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Amber, HIGH);
  delay(1000);
  digitalWrite(Amber, LOW);
  delay(1000);
  digitalWrite(Blue, HIGH);
  delay(1000);
  digitalWrite(Blue, LOW);
  delay(1000);
}