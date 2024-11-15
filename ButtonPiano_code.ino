/*
This code allows playing musical notes on a buzzer using 4 buttons. Each button or combination of buttons
corresponds to a specific note.
*/

int b1c = 7; // defining the buttons
int b2d = 6;
int b3e = 5;
int b4f = 4;

int buzz = 12; // defining the buzzer

float c = 261.63; // defining the musical notes from C4 to C5
float d = 293.66;
float e = 330;
float f = 349;
float g = 392;
float a = 440;
float b = 493.88;
float c5 = 523.25;

void setup() 
{
  pinMode(b1c, INPUT); // defining the pins for the buttons and the buzzer
  pinMode(b2d, INPUT);
  pinMode(b3e, INPUT);
  pinMode(b4f, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop() 
{
  // Checks if all buttons are pressed to play the note C5
  if (digitalRead(b1c) == HIGH && digitalRead(b2d) == HIGH && digitalRead(b3e) == HIGH && digitalRead(b4f) == HIGH) 
  {
    tone(buzz, c5); // Plays the note C5
  } 
  // Checks combinations of two buttons
  else if (digitalRead(b1c) == HIGH && digitalRead(b2d) == HIGH) 
  {
    tone(buzz, g);
  } 
  else if (digitalRead(b1c) == HIGH && digitalRead(b3e) == HIGH) 
  {
    tone(buzz, a);
  } 
  else if (digitalRead(b1c) == HIGH && digitalRead(b4f) == HIGH) 
  {
    tone(buzz, b);
  } 
  // Checks individual notes
  else 
  {
    if (digitalRead(b1c) == HIGH) 
    {
      tone(buzz, c);
    } 
    else if (digitalRead(b2d) == HIGH) 
    {
      tone(buzz, d);
    } 
    else if (digitalRead(b3e) == HIGH) 
    {
      tone(buzz, e);
    } 
    else if (digitalRead(b4f) == HIGH) 
    {
      tone(buzz, f);
    } 
    else 
    {
      noTone(buzz); // stops the buzzer from emitting sound
    }
  }
}
