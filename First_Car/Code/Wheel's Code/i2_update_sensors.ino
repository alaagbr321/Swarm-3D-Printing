void update_sensors()
{
  //Serial.println("update sensors");
  fwdbwd = ((*forw)())*8 + ((*back)());
  lftrit = ((*lf)())*8 + ((*rt)());
}
