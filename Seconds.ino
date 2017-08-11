void seconds (){

//0-4 aka strip 0

if (s >= 0 && s < 4) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 0 && mh != 0){
  
   for (int i = 0; i< 5; i++){
   leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 0 && mh != 0){
    for (int i = 3; i< 5; i++){
    leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 0){
    for (int i = 4; i< 5; i++){
    leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 11 && mh != 11){
for (int i = 0; i< 5; i++){
leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 11 && mh != 11){
for (int i = 3; i< 5; i++){
leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 11){
for (int i = 4; i< 5; i++){
leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }


 //5-9 aka strip 1

if (s >= 5 && s < 10) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 1 && mh != 1){
  
   for (int i = 0; i< 5; i++){
   leds[One[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 1 && mh != 1){
    for (int i = 3; i< 5; i++){
    leds[One[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 1){
    for (int i = 4; i< 5; i++){
    leds[One[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 0 && mh != 0){
for (int i = 0; i< 5; i++){
leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 0 && mh != 0){
for (int i = 3; i< 5; i++){
leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 0){
for (int i = 4; i< 5; i++){
leds[Twelve[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//10-14 aka strip 2

if (s >= 10 && s < 15) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 2 && mh != 2){
  
   for (int i = 0; i< 5; i++){
   leds[Two[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 2 && mh != 2){
    for (int i = 3; i< 5; i++){
    leds[Two[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 2){
    for (int i = 4; i< 5; i++){
    leds[Two[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 1 && mh != 1){
for (int i = 0; i< 5; i++){
leds[One[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 1 && mh != 1){
for (int i = 3; i< 5; i++){
leds[One[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 1){
for (int i = 4; i< 5; i++){
leds[One[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//15-19 aka strip 3

if (s >= 15 && s < 20) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 3 && mh != 3){
  
   for (int i = 0; i< 5; i++){
   leds[Three[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 3 && mh != 3){
    for (int i = 3; i< 5; i++){
    leds[Three[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 3){
    for (int i = 4; i< 5; i++){
    leds[Three[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 2 && mh != 2){
for (int i = 0; i< 5; i++){
leds[Two[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 2 && mh != 2){
for (int i = 3; i< 5; i++){
leds[Two[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 2){
for (int i = 4; i< 5; i++){
leds[Two[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//20-24 aka strip 4

if (s >= 20 && s < 25) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 4 && mh != 4){
  
   for (int i = 0; i< 5; i++){
   leds[Four[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 4 && mh != 4){
    for (int i = 3; i< 5; i++){
    leds[Four[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 4){
    for (int i = 4; i< 5; i++){
    leds[Four[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 3 && mh != 3){
for (int i = 0; i< 5; i++){
leds[Three[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 3 && mh != 3){
for (int i = 3; i< 5; i++){
leds[Three[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 3){
for (int i = 4; i< 5; i++){
leds[Three[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//25-29 aka strip 5

if (s >= 25 && s < 30) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 5 && mh != 5){
  
   for (int i = 0; i< 5; i++){
   leds[Five[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 5 && mh != 5){
    for (int i = 3; i< 5; i++){
    leds[Five[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 5){
    for (int i = 4; i< 5; i++){
    leds[Five[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 4 && mh != 4){
for (int i = 0; i< 5; i++){
leds[Four[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 4 && mh != 4){
for (int i = 3; i< 5; i++){
leds[Four[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 4){
for (int i = 4; i< 5; i++){
leds[Four[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }


//30-34 aka strip 6

if (s >= 30 && s < 35) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 6 && mh != 6){
  
   for (int i = 0; i< 5; i++){
   leds[Six[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 6 && mh != 6){
    for (int i = 3; i< 5; i++){
    leds[Six[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 6){
    for (int i = 4; i< 5; i++){
    leds[Six[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 5 && mh != 5){
for (int i = 0; i< 5; i++){
leds[Five[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 5 && mh != 5){
for (int i = 3; i< 5; i++){
leds[Five[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 5){
for (int i = 4; i< 5; i++){
leds[Five[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }


//35-39 aka strip 7

if (s >= 35 && s < 40) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 7 && mh != 7){
  
   for (int i = 0; i< 5; i++){
   leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 7 && mh != 7){
    for (int i = 3; i< 5; i++){
    leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 7){
    for (int i = 4; i< 5; i++){
    leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 6 && mh != 6){
for (int i = 0; i< 5; i++){
leds[Six[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 6 && mh != 6){
for (int i = 3; i< 5; i++){
leds[Six[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 6){
for (int i = 4; i< 5; i++){
leds[Six[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//40-44 aka strip 8

if (s >= 40 && s < 45) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 8 && mh != 8){
  
   for (int i = 0; i< 5; i++){
   leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 8 && mh != 8){
    for (int i = 3; i< 5; i++){
    leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 8){
    for (int i = 4; i< 5; i++){
    leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 7 && mh != 7){
for (int i = 0; i< 5; i++){
leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 7 && mh != 7){
for (int i = 3; i< 5; i++){
leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 7){
for (int i = 4; i< 5; i++){
leds[Seven[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }



//45-49 aka strip 9

if (s >= 45 && s < 50) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 9 && mh != 9){
  
   for (int i = 0; i< 5; i++){
   leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 9 && mh != 9){
    for (int i = 3; i< 5; i++){
    leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 9){
    for (int i = 4; i< 5; i++){
    leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 8 && mh != 8){
for (int i = 0; i< 5; i++){
leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 8 && mh != 8){
for (int i = 3; i< 5; i++){
leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 8){
for (int i = 4; i< 5; i++){
leds[Eight[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }


//50-54 aka strip 10

if (s >= 50 && s < 55) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 10 && mh != 10){
  
   for (int i = 0; i< 5; i++){
   leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 10 && mh != 10){
    for (int i = 3; i< 5; i++){
    leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 10){
    for (int i = 4; i< 5; i++){
    leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 9 && mh != 9){
for (int i = 0; i< 5; i++){
leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 9 && mh != 9){
for (int i = 3; i< 5; i++){
leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 9){
for (int i = 4; i< 5; i++){
leds[Nine[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }

//55-59 aka strip 11

if (s >= 55 && s < 60) { 
 
 //if there are no other hands, the second hand fills the strip
 if (h != 11 && mh != 11){
  
   for (int i = 0; i< 5; i++){
   leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal);
} } 
//if only the hour hand is there, fill the second and minute sections of the strip
 if (h == 11 && mh != 11){
    for (int i = 3; i< 5; i++){
    leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }
//if the minute hand is there, fill only the second section of the strip
 if (mh == 11){
    for (int i = 4; i< 5; i++){
    leds[Eleven[i]] = CHSV (secondHandHue, secondHandSat, secondHandVal); } }

//turn off previous

//if there's no other hands at the previous position, clear the whole strip
if (h != 10 && mh != 10){
for (int i = 0; i< 5; i++){
leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, 0); } }

//if only the hour hand is at the previous position, clear the minute and second sections of the strip
if (h == 10 && mh != 10){
for (int i = 3; i< 5; i++){
leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, 0); }}

//if the minute hand is at the previous poision, only clear the second section of the strip
if ( mh == 10){
for (int i = 4; i< 5; i++){
leds[Ten[i]] = CHSV (secondHandHue, secondHandSat, 0); }}


LEDS.show();

 }

  
} //End Loop

