void intersection(){
  adjust_step_size(SMALL_STEP);
  switch(lftrit){
    
    /* ERROR */
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    
    case 5:
    case 13:
    case 21:
    case 29:
    case 37:
    case 53:
    
    /*case 7:
    case 15:
    case 23:
    case 31:
    case 39:*/
    case 47:
    /*case 55:*/
    
    case 18:
    
    /*case 56:
    case 57:
    case 58:
    case 59:
    case 60:*/
    case 61:
    /*case 62:
    case 63:
    */
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

    case 0:      
    case 1:
    case 2:
    case 3:
    case 4:
    
    case 6:
    
    case 8:
    case 16:
    case 24:
    case 32:
    
    case 48:

    case 12:
    
    case 30:
      (*north)();
      break;
      
    case 33:
    case 51:
      (*south)();
      break;

    case 34:
    case 49:
    case 50:
    case 52:
      (*s6)();
      break;

    case 10:
    case 25:
    case 28:
    case 26:    
      (*s5)();
      break;

    case 11:
    case 17:
    case 19:
    case 35:
      (*s8)();
      break;
    
    case 14:
    case 20:
    case 22:
    case 38:
      (*s7)();
      break;

    case 56:
      (*north)();
      break;
    case 57:
      (*s5)();
      break;
    case 58:
    case 60:
      (*s6)();
      break;
    case 59:
      (*south)();
      break;
    case 62:
    case 55:
      (*ccw)();
      break;
    case 7:
    case 31:
      (*north)();
      break;
    case 15:
      (*s8)();
      break;
    case 23:
    case 39:
      (*s7)();
      break;
      
  }  
}

/*
 * switch(lftrit){
    case 0: // no line    
    case 12:      
    case 30:  //smth else      
      (*north)();
      break;
    case 33:      
    case 51:
      (*south)();
      break;
    case 18:
      stop_robot();
   
  }
 */
