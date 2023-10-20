 int PIN_1_State =0;
 int PIN_2_State =0;
 int PIN_3_State =0;
 
void loop(){  
  //Read state of Digital PINS
  int PIN_1_State = digitalRead(PIN_1_TO_READ);
  int PIN_2_State = digitalRead(PIN_2_TO_READ);
  int PIN_3_State = digitalRead(PIN_3_TO_READ);

  //Print the State in Serial Monitor 0 for LOW / 1 for HIGH
  
  Serial.print("D40, D42, D44 is ");
  Serial.print(PIN_1_State);
  Serial.print(", ");
  Serial.print(PIN_2_State);
  Serial.print(", ");
  Serial.println(PIN_3_State);
  
  //delay(1000);
  
  //Conditions control DIRECTIONS
    if ((PIN_1_State ==0) && (PIN_2_State == 1) && (PIN_3_State == 1)) {
      Serial.println("DIRECTION IS FORWARD");
      move_unit(FORWARD_);
      align_center2();
    } else if ((PIN_1_State ==1) && (PIN_2_State == 1) && (PIN_3_State ==0)) {
      Serial.println("DIRECTION IS BACKWARD"); 
      move_unit(BACKWARD_);
      align_center2();
    } else if ((PIN_1_State ==0 )&& (PIN_2_State == 1) && (PIN_3_State == 1)) {
      Serial.println("DIRECTION IS RIGHT"); 
      move_unit(RIGHT_);
      align_center2();
    } else if ((PIN_1_State ==0) && (PIN_2_State == 0) && (PIN_3_State == 1)) {
      Serial.println("DIRECTION IS LEFT");
      move_unit(LEFT_);
      align_center2();
    }else{
        stop_robot();
    }
     
    //Serial.println("Done");
  }    
 
