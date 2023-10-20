int fwd(){
  int s0 = !digitalRead(FL);
  int s1 = !digitalRead(FC);
  int s2 = !digitalRead(FR);

  int sensorvalue = 0;
  sensorvalue +=s0*4+s1*2+s2;
 
  return sensorvalue;
}
int bwd(){
  int s0 = !digitalRead(BL);
  int s1 = !digitalRead(BC);
  int s2 = !digitalRead(BR);

  int sensorvalue = 0;
  sensorvalue +=s0*4+s1*2+s2;
 
  return sensorvalue;
}
int lft(){
  int s0 = !digitalRead(LL);
  int s1 = !digitalRead(LC);
  int s2 = !digitalRead(LR);

  int sensorvalue = 0;
  sensorvalue +=s0*4+s1*2+s2;
 
  return sensorvalue;
}
int rit(){
  int s0 = !digitalRead(RL);
  int s1 = !digitalRead(RC);
  int s2 = !digitalRead(RR);

  int sensorvalue = 0;
  sensorvalue +=s0*4+s1*2+s2;
 
  return sensorvalue;
}
