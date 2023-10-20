void line_follow(){ 
  //adjust_step_size(SMALL_STEP);
  switch(fwdbwd){
    case 0:
      stop_robot();
      break;
    /* scan */
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    {
      /* front = 0 */
      adjust_step_size(LARGE_STEP);
      switch (front_prev){
        case 1:
        case 3:
          (*s1)();
          break;
        case 4:
        case 6:
          (*s2)();
          break;        
        case 2:
        case 5:
        case 7:
          stop_robot();
          break;          
      }
    }
      break;
    case 8:
    case 16:
    case 24:
    case 32:
    case 48:
    case 56:
    { 
      //back = 0
      adjust_step_size(LARGE_STEP);
      switch (back_prev){
        case 1:
        case 3:          
          (*s4)();
          break;
        case 4:
        case 6:
          (*s3)();
          break;
        case 2:
        case 5:
        case 7:
          stop_robot(); 
          break;         
      }
    }
      break;
    /* ERROR */
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 5:
    case 13:
    case 21:
    case 29:
    case 37:
    case 53:
    case 61:
    //case 63:
      stop_robot(); //ERROR      
      break;

    case 9:
    case 27:
      (*cw)();
      break;
      
    case 36:
    case 54:
      (*ccw)();
      break;

    case 12:
    case 30:
      (*east)();
      break;

    case 63:

    case 15:
    case 23:
    case 31:
    case 39:
    case 55:
      //(*south)();
      //break;
    case 18:
    case 57:
    case 58:
    case 59:
    case 60:
    case 62:
      adjust_step_size(LARGE_STEP);
      (*north)();
      break;

    case 33:
    case 51:
      (*west)();
      break;

    case 34:
    case 49:
    case 50:
    case 52:
      (*s2)();
      break;

    case 25:
    case 28:
    case 10:
    case 26:
      (*s1)();
      break;

    case 11:
    case 17:
    case 19:
    case 35:
      (*s4)();
      break;

    case 14:
    case 20:
    case 22:
    case 38:
      (*s3)();
      break;
  }  
  int back_current = fwdbwd & 0b111;
  int front_current = fwdbwd / 8;
  if(back_current != 0){
    back_prev = back_current;
  }
  if(front_current != 0){
    front_prev = front_current;
  }
}
