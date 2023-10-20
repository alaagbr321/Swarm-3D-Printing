void setup()
{
  //Sensors channels
  pinMode(FL,INPUT);
  pinMode(FC,INPUT);
  pinMode(FR,INPUT);

  pinMode(BL,INPUT);
  pinMode(BC,INPUT);
  pinMode(BR,INPUT);

  pinMode(RL,INPUT);
  pinMode(RC,INPUT);
  pinMode(RR,INPUT);

  pinMode(LL,INPUT);
  pinMode(LC,INPUT);
  pinMode(LR,INPUT);

  //motor control
  pinMode(X_STEP_PIN  , OUTPUT);
  pinMode(X_DIR_PIN    , OUTPUT);
  pinMode(X_ENABLE_PIN    , OUTPUT);
  
  pinMode(Y_STEP_PIN  , OUTPUT);
  pinMode(Y_DIR_PIN    , OUTPUT);
  //pinMode(Y_ENABLE_PIN    , OUTPUT);
  
  pinMode(Z_STEP_PIN  , OUTPUT);
  pinMode(Z_DIR_PIN    , OUTPUT);
  //pinMode(Z_ENABLE_PIN    , OUTPUT);
  
  pinMode(E_STEP_PIN  , OUTPUT);
  pinMode(E_DIR_PIN    , OUTPUT);
  //pinMode(E_ENABLE_PIN    , OUTPUT);

  digitalWrite(X_ENABLE_PIN    , LOW); //upper left                                        
  //digitalWrite(Y_ENABLE_PIN    , LOW); //upper right                                       
  //digitalWrite(Z_ENABLE_PIN    , LOW); //lower left
  //digitalWrite(E_ENABLE_PIN    , LOW); //lower right          

  stop_robot();
  
  Serial.begin(9600);


  //Set PINS D40/D42/D44 as INPUTS 
  pinMode(PIN_1_TO_READ,INPUT);
  pinMode(PIN_2_TO_READ,INPUT);
  pinMode(PIN_3_TO_READ,INPUT);

  //Set the pins to High State (Logic 1)
  digitalWrite(PIN_1_TO_READ, HIGH);
  digitalWrite(PIN_2_TO_READ, HIGH);
  digitalWrite(PIN_3_TO_READ, HIGH);


  /*******  set first direction forward and align car to start  *******/
  move_unit(FORWARD_);
 
  align_center();

  //Serial.println("setup complete");
  
}
