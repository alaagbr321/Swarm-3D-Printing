void align_center(){
  do {
    if((fwdbwd != 0) && (lftrit == 0)){
      adjust_step_size(MEDIUM_STEP);
    } else if ((fwdbwd != 0) && (lftrit != 0)){
      adjust_step_size(SMALL_STEP);
    }
    while((fwdbwd != 18) || (lftrit == 0)){
      delay(READ_DELAY);
      line_follow();
      delay(READ_DELAY);
      update_sensors();
    }            
    while((fwdbwd == 18) && (lftrit != 18) && (lftrit != 0)){
      delay(READ_DELAY);
      intersection();
      delay(READ_DELAY);
      update_sensors();
    }
    /*if((fwdbwd == 18) && (lftrit == 18)){
      break;      
    }*/      
  }while((fwdbwd != 18) && (lftrit != 18));
}

void align_center2(){
  update_sensors();
  while(lftrit != 0){
    delay(READ_DELAY);
    line_follow();
    delay(READ_DELAY);
    update_sensors();
  }
  align_center();
  update_sensors();
}

/*
 * TRIAL 3 (current)
 */
/*while(1){
    Serial.println("1");
    if((fwdbwd != 18) || ((fwdbwd == 18) && (lftrit == 0))){
      Serial.println("2");
       line_follow();
       update_sensors();
    }
    else if((fwdbwd == 18) && (lftrit != 18) && (lftrit != 0)){
      Serial.println("3");
      intersection();
      update_sensors();      
    }
    else if ((fwdbwd == 18) && (lftrit == 18)){
      Serial.println("4");
      update_sensors();
      break;
    }
    else{
      Serial.println("5");
      update_sensors();
    }    
  }*/
 
/*
 * TRIAL 2
 */
 /*Serial.println("align center");
  do {
    Serial.println("line follow");
    line_follow();
    Serial.println("line follow done");
    update_sensors();        
    while((fwdbwd == 18) && (lftrit != 18) && (lftrit != 0)){
      Serial.println("intersect");
      intersection();
      Serial.println("intersect done");
      update_sensors();
    }
    if((fwdbwd == 18) && (lftrit == 18))
      break;
  }while((fwdbwd != 18) && (lftrit != 18));
  */

 /*
  * TRIAL 1
  */
  /*goto center_self;
  center_self:
    while(fwdbwd != 18) //010 010
    {
      line_follow();
      update_sensors();        
    }    
    goto stop_self;
  stop_self:
    while((fwdbwd == 18) && (lftrit != 18))
    {
      /* adjust to intersect */
  /*    intersection();
      update_sensors();
    }
    if(fwdbwd != 18){
      goto center_self;  
    }    */
  
