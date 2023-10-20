void stop_robot()
{
  digitalWrite(X_STEP_PIN    , LOW);
  digitalWrite(Y_STEP_PIN    , LOW);
  digitalWrite(Z_STEP_PIN    , LOW);
  digitalWrite(E_STEP_PIN    , LOW);    
}
/****************************************************/
void adjust_step_size(int step_size){
  steps = step_size;    
}
/****************************************************/
void move_robot(){
  for(int x = 0; x < steps; x++) {

  digitalWrite(X_STEP_PIN    , HIGH);
  digitalWrite(Y_STEP_PIN    , HIGH);
  digitalWrite(Z_STEP_PIN    , HIGH);
  digitalWrite(E_STEP_PIN    , HIGH);

  delayMicroseconds(DELAY);
  
  digitalWrite(X_STEP_PIN    , LOW);
  digitalWrite(Y_STEP_PIN    , LOW);
  digitalWrite(Z_STEP_PIN    , LOW);
  digitalWrite(E_STEP_PIN    , LOW);
  
  delayMicroseconds(DELAY);
  }
}

void moveZY(){
  for(int x = 0; x < steps; x++){
  
    digitalWrite(Y_STEP_PIN    , HIGH);
    digitalWrite(Z_STEP_PIN    , HIGH);
    
    delayMicroseconds(DELAY);
    
    digitalWrite(Y_STEP_PIN    , LOW);
    digitalWrite(Z_STEP_PIN    , LOW);
    
    delayMicroseconds(DELAY);
  }
}
  void moveXE()
  {
for(int x = 0; x < steps; x++) {
  
    digitalWrite(X_STEP_PIN    , HIGH);
    digitalWrite(E_STEP_PIN    , HIGH);

   delayMicroseconds(DELAY);
    
    digitalWrite(X_STEP_PIN    , LOW);
    digitalWrite(E_STEP_PIN    , LOW);
    
  delayMicroseconds(DELAY);
  }
  }
/****************************************************/
  void moveXY(){
    for(int x = 0; x < steps; x++) {
  
    digitalWrite(X_STEP_PIN    , HIGH);
    digitalWrite(Y_STEP_PIN    , HIGH);
    
   delayMicroseconds(DELAY);
    
    digitalWrite(X_STEP_PIN    , LOW);
    digitalWrite(Y_STEP_PIN    , LOW);
    
  delayMicroseconds(DELAY);
  }
  }
  void moveEZ(){
    for(int x = 0; x < steps; x++) {
  
    digitalWrite(E_STEP_PIN    , HIGH);
    digitalWrite(Z_STEP_PIN    , HIGH);
    
   delayMicroseconds(DELAY);
    
    digitalWrite(E_STEP_PIN    , LOW);
    digitalWrite(Z_STEP_PIN    , LOW);
    
  delayMicroseconds(DELAY);
  }
  }

  void moveXZ(){
    for(int x = 0; x < steps; x++) {
  
    digitalWrite(X_STEP_PIN    , HIGH);
    digitalWrite(Z_STEP_PIN    , HIGH);
    
   delayMicroseconds(DELAY);
    
    digitalWrite(X_STEP_PIN    , LOW);
    digitalWrite(Z_STEP_PIN    , LOW);
    
  delayMicroseconds(DELAY);
  }
  }
  void moveYE(){
    for(int x = 0; x < steps; x++) {
  
    digitalWrite(E_STEP_PIN    , HIGH);
    digitalWrite(Y_STEP_PIN    , HIGH);
    
   delayMicroseconds(DELAY);
    
    digitalWrite(E_STEP_PIN    , LOW);
    digitalWrite(Y_STEP_PIN    , LOW);
    
  delayMicroseconds(DELAY);
  }
  }
/****************************************************/
