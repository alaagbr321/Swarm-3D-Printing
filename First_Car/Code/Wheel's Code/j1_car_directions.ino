
/****************************************************/
 void m1(void)
  {
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(Y_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , HIGH);
    digitalWrite(E_DIR_PIN    , LOW);
    move_robot();   
  }
  void m5()
  {
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(Y_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , LOW);
    digitalWrite(E_DIR_PIN    , HIGH);  
    move_robot(); 
  }
  void m7()
  {
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(Y_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , LOW);
    digitalWrite(E_DIR_PIN    , LOW); 
    move_robot();   
  }
  void m3()
  {
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(Y_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , HIGH);
    digitalWrite(E_DIR_PIN    , HIGH);  
    move_robot();  
  }
/****************************************************/
  void m2(){
    digitalWrite(Y_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , HIGH);
    moveZY();
  }
  void m4(){
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(E_DIR_PIN    , HIGH);
    moveXE();
  }
  void m6(){
    digitalWrite(Y_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , LOW);
    moveZY();
  }
  void m8(){
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(E_DIR_PIN    , LOW);
    moveXE();
  }
/****************************************************/
  void m9(){
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(Y_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , LOW);
    digitalWrite(E_DIR_PIN    , LOW);  
    move_robot();
  }  
  void m10(){
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(Y_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , HIGH);
    digitalWrite(E_DIR_PIN    , HIGH);  
    move_robot();
  }
/****************************************************/
  void m11(){
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(Y_DIR_PIN    , HIGH);
    moveXY();
  }
  void m12(){
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(Y_DIR_PIN    , LOW);
    moveXY();
  }
  void m13(){
    digitalWrite(E_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , LOW);
    moveEZ();
  }
  void m14(){
    digitalWrite(E_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , HIGH);
    moveEZ();
  }
/****************************************************/
  void m15(){
    digitalWrite(X_DIR_PIN    , HIGH);
    digitalWrite(Z_DIR_PIN    , HIGH);
    moveXZ();
  }
  void m16(){
    digitalWrite(X_DIR_PIN    , LOW);
    digitalWrite(Z_DIR_PIN    , LOW);
    moveXZ();
  }
  void m17(){
    digitalWrite(Y_DIR_PIN    , LOW);
    digitalWrite(E_DIR_PIN    , LOW);
    moveYE();
  }
  void m18(){
    digitalWrite(Y_DIR_PIN    , HIGH);
    digitalWrite(E_DIR_PIN    , HIGH);
    moveYE();
  }
/****************************************************/
  
