void move_unit(int destination){
  
  switch(destination){
    case FORWARD_:
      cw = m10;
      ccw = m9;
      north = m1;
      south = m5;
      east = m7;
      west = m3;

      s1 = m11;
      s2 = m12;
      s3 = m13;
      s4 = m14;

      s5 = m15;
      s6 = m16;
      s7 = m17;
      s8 = m18;

      forw = fwd;
      back = bwd;
      lf = lft;
      rt = rit;
      break;

    case BACKWARD_:
      cw = m10;
      ccw = m9;
      north = m5;
      south = m1;
      east = m3;
      west = m7;

      s1 = m14;
      s2 = m13;
      s3 = m12;
      s4 = m11;

      s5 = m18;
      s6 = m17;
      s7 = m16;
      s8 = m15;

      forw = bwd;
      back = fwd;
      lf = rit;
      rt = lft;
      break;

    case LEFT_:
    //Serial.println("left move unit");
      cw = m10;
      ccw = m9;
      north = m3;
      south = m7;
      east = m1;
      west = m5;

      s1 = m15;
      s2 = m16;
      s3 = m17;
      s4 = m18;

      s5 = m14;
      s6 = m13;
      s7 = m12;
      s8 = m11;

      forw = lft;
      back = rit;
      lf = bwd;
      rt = fwd;
      break;

    case RIGHT_:
    //Serial.println("right move unit");
      cw = m10;
      ccw = m9;
      north = m7;
      south = m3;
      east = m5;
      west = m1;

      s1 = m18;
      s2 = m17;
      s3 = m16;
      s4 = m15;

      s5 = m11;
      s6 = m12;
      s7 = m13;
      s8 = m14;

      forw = rit;
      back = lft;
      lf = fwd;
      rt = bwd;
      break;

    default:
      //Serial.println("stop robot move unit");
      cw = stop_robot;
      ccw = stop_robot;
      north = stop_robot;
      south = stop_robot;
      east = stop_robot;
      west = stop_robot;

      s1 = stop_robot;
      s2 = stop_robot;
      s3 = stop_robot;
      s4 = stop_robot;

      s5 = stop_robot;
      s6 = stop_robot;
      s7 = stop_robot;
      s8 = stop_robot;
  }
  update_sensors();
 // align_center();  
}
