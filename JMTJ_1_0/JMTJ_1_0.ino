// JE MI TO JEDNO
const int sol = 13;
const int ir = 9;

int state;

void setup(){
  pinMode(sol, OUTPUT);
}

void loop(){
  state = digitalRead(ir);
  if (state == LOW){
    digitalWrite(sol, HIGH);
    delay(100);
    digitalWrite(sol, LOW);
    delay(400);
  }
}
