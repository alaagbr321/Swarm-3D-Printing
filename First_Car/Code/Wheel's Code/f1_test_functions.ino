/*******  send direction through serial monitor *******/
// send 0 = forward, 1 = backward, 2 = right, 3 = left
void serial_move_unit(){  
  int  x = 0;
  if (Serial.available()>0) {    
    // read all the available characters
    while (Serial.available() > 0) {
      x = Serial.parseInt();
      //Serial.println(x);
        switch(x){
          case FORWARD_:  // value = 0
            move_unit(FORWARD_);
            break;
          case BACKWARD_:  // value = 1
            move_unit(BACKWARD_);
            break;          
          case RIGHT_:  // value = 2
            move_unit(RIGHT_);
            break;
          case LEFT_:  // value = 3
            move_unit(LEFT_);
            break;
          default:
            stop_robot();
        }
        align_center2();
        Serial.println("Done");
      }    
  }   
}
/*******  send motion number for robot to move  *******/
//  NOTE: adjust step size to 10 or 15 so that motion is clear
//send values from 1 to 18 , stop = 0 or anything else
void serial_move(){
  adjust_step_size(SMALL_STEP);
  int  x = 0;
  if (Serial.available()>0) {    
    // read all the available characters
    while (Serial.available() > 0) {
      x = Serial.parseInt();
      //Serial.println(x);
        switch(x){
          case 1:
            m1();
            break;
          case 2:
            m2();
            break;
          case 3:
            m3();
            break;
          case 4:
            m4();
            break;
          case 5:
            m5();
            break;
          case 6:
            m6();
            break;
          case 7:
            m7();
            break;
          case 8:
            m8();
            break;
          case 9:
            m9();
            break;
          case 10:
            m10();
            break;
          case 11:
            m11();
            break;
          case 12:
            m12();
            break;
          case 13:
            m13();
            break;
          case 14:
            m14();
            break;
          case 15:
            m15();
            break;
          case 16:
            m16();
            break;
          case 17:
            m17();
            break;
          case 18:
            m18();
            break;          
          case 0:
          default:
            stop_robot();
        }
      }    
  }   
}
/*******  prints all 4 sensor values  *******/
// NOTE: 0 = no line, 1 = line
//may need to adjust tabs for better view in serial monitor
void print_sensors(){
  Serial.print("Front\t");
  Serial.print("Back\t");
  Serial.print("Left\t");
  Serial.println("Right\t");
  Serial.print(fwd(),BIN);
  Serial.print("\t ");
  Serial.print(bwd(),BIN);
  Serial.print("\t ");
  Serial.print(lft(),BIN);
  Serial.print("\t ");
  Serial.print(rit(),BIN);
  Serial.println("\t");
  Serial.println("===========================================");
}
