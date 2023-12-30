int inp1 = 12, inp2 = 11, inp3 = 10, inp4 = 9, ls = 7, rs = 4, en_a = 2, en_b = 2;

void setup() {
  Serial.begin(9600);
  pinMode(en_a, OUTPUT);
  pinMode(en_b, OUTPUT);
  pinMode(ls, INPUT);  
  pinMode(rs, INPUT);
  pinMode(inp1, OUTPUT);
  pinMode(inp2, OUTPUT);
  pinMode(inp3, OUTPUT);
  pinMode(inp4, OUTPUT);
}

void loop() {
  // Serial.println(digitalRead(ls));
  // Serial.println(digitalRead(rs));
  // digitalWrite(inp1, int(!(bool(digitalRead(ls)))));
  digitalWrite(en_a, HIGH);
  digitalWrite(en_b, HIGH);
  digitalWrite(inp1, swapFunc(ls));
  digitalWrite(inp2, LOW);
  // digitalWrite(inp3, int(!(bool(digitalRead(rs)))));
  digitalWrite(inp3, swapFunc(rs));
  digitalWrite(inp4, LOW);
}

int swapFunc(int a) {
  if (a > 0) {
    return 0;
  } else {
    return 1;
  }
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