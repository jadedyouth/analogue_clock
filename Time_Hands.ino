//display the time on the clock
void displayHands(){
    
  byte second, minute, thour, dayOfWeek, day, month, year; //thour = hour set for daylight savings
  // retrieve data from DS3231
  readDS3231time(&second, &minute, &thour, &dayOfWeek, &day, &month,
  &year);

  s = second;
  m = minute;
if (h <= 12){ h = thour; }
if (h > 12){ h = thour-12; }
}


void makeItTick (){
    //hands
extras ();
hours ();
minutes ();
seconds ();
}

