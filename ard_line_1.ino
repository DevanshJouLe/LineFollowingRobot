int inp1 = 11, inp2 = 9, inp3 = 7, inp4 = 5, ls, rs;

void setup() {
  pinMode(inp1);
}

void loop() {
  digitalWrite(inp1, int(!(bool(ls))));
  digitalWrite(inp2, LOW);
  digitalWrite(inp3, int(!(bool(rs)));
  digitalWrite(inp4, LOW);
}

// m1 ==> left
// m2 ==> right
// in1 ==> m1+
// in2 ==> m1-
// in3 ==> m2+
// in4 ==> m2-

// 0 ==> non-black
// 1 ==> black
// (l, r)
// (0, 0) ==> move forward (spin left and right)
// (0, 1) ==> turn right (spin left)
// (1, 0) ==> turn left (spin right)
// (1, 1) ==> stop



//   if (ls == 1)
//  if((digitalRead(rs)==1 && digitalRead(ls)==1){
//   stop();
//  }
//   if((digitalRead(rs)==1) && digitalRead(ls)==0){
//   right();
//  }
//  if((digitalRead(rs)==0) && digitalRead(ls)==1){
//   left();
//  }
//  if(digitalRead(rs)==0 && digitalRead(ls)==0){
//   forward();
//  }
// void stop(){
//   digitalWrite(inp1,LOW);
//   digitalWrite(inp2,LOW);
//   digitalWrite(inp3,LOW);
//   digitalWrite(inp4,LOW);
// }
// void right(){
//   digitalWrite(inp1,HIGH);
//   digitalWrite(inp2,LOW);
//   digitalWrite(inp3,LOW);
//   digitalWrite(inp4,LOW);
// }
// void left(){
//   digitalWrite(inp1,LOW);
//   digitalWrite(inp2,LOW);
//   digitalWrite(inp3,HIGH);
//   digitalWrite(inp4,LOW);
// }
// void forward(){
//   digitalWrite(inp1,HIGH;
//   digitalWrite(inp2,LOW);
//   digitalWrite(inp3,HIGH);
//   digitalWrite(inp4,LOW);
// }