void minutes () {
   
  //0-4 aka strip 0

if (m >= 0 && m < 5) { 
 if (h != 0){
  
   for (int i = 0; i< 4; i++){
   leds[Twelve[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 0){
    for (int i = 3; i< 4; i++){
    leds[Twelve[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 11 && sh != 11) {
for (int i = 0; i< 4; i++){
leds[Eleven[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 11 && sh != 11){
for (int i = 3; i< 4; i++){
leds[Eleven[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


  //5-9 aka strip 1

if (m >= 5 && m < 10) { 
 if (h != 1){
  
   for (int i = 0; i< 4; i++){
   leds[One[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 1){
    for (int i = 3; i< 4; i++){
    leds[One[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 0 && sh != 0){
for (int i = 0; i< 4; i++){
leds[Twelve[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 0 && sh != 0){
for (int i = 3; i< 4; i++){
leds[Twelve[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }



  //10-14 aka strip 2

if (m >= 10 && m < 15) { 
 if (h != 2){
  
   for (int i = 0; i< 4; i++){
   leds[Two[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 2){
    for (int i = 3; i< 4; i++){
    leds[Two[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }
//turn off previous
if (h != 1 && sh != 1){
for (int i = 0; i< 4; i++){
leds[One[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 1 && sh != 1){
for (int i = 3; i< 4; i++){
leds[One[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }



  //15-19 aka strip 3

if (m >= 15 && m < 20) { 
 if (h != 3){
  
   for (int i = 0; i< 4; i++){
   leds[Three[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 3){
    for (int i = 3; i< 4; i++){
    leds[Three[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 2 && sh != 2){
for (int i = 0; i< 4; i++){
leds[Two[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 2 && sh != 2){
for (int i = 3; i< 4; i++){
leds[Two[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


  //20-24 aka strip 4

if (m >= 20 && m < 25) { 
 if (h != 4){
  
   for (int i = 0; i< 4; i++){
   leds[Four[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 4){
    for (int i = 3; i< 4; i++){
    leds[Four[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 3 && sh != 3){
for (int i = 0; i< 4; i++){
leds[Three[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 3 && sh != 3){
for (int i = 3; i< 4; i++){
leds[Three[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }



  //25-29 aka strip 5

if (m >= 25 && m < 30) { 
 if (h != 5){
  
   for (int i = 0; i< 4; i++){
   leds[Five[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 5){
    for (int i = 3; i< 4; i++){
    leds[Five[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 4 && sh != 4){
for (int i = 0; i< 4; i++){
leds[Four[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 4 && sh != 4){
for (int i = 3; i< 4; i++){
leds[Four[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


  //30-34 aka strip 6

if (m >= 30 && m < 35) { 
 if (h != 6){
  
   for (int i = 0; i< 4; i++){
   leds[Six[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 6){
    for (int i = 3; i< 4; i++){
    leds[Six[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 5 && sh != 5){
for (int i = 0; i< 4; i++){
leds[Five[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 5 && sh != 5){
for (int i = 3; i< 4; i++){
leds[Five[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


  //35-39 aka strip 7

if (m >= 35 && m < 40) { 
 if (h != 7){
  
   for (int i = 0; i< 4; i++){
   leds[Seven[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 7){
    for (int i = 3; i< 4; i++){
    leds[Seven[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 6 && sh != 6){
for (int i = 0; i< 4; i++){
leds[Six[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 6 && sh != 6){
for (int i = 3; i< 4; i++){
leds[Six[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


  //40-44 aka strip 8

if (m >= 40 && m < 45) { 
 if (h != 8){
  
   for (int i = 0; i< 4; i++){
   leds[Eight[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 8){
    for (int i = 3; i< 4; i++){
    leds[Eight[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 7 && sh != 7){
for (int i = 0; i< 4; i++){
leds[Seven[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 7 && sh != 7){
for (int i = 3; i< 4; i++){
leds[Seven[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


   //45-49 aka strip 9

if (m >= 45 && m < 50) { 
 if (h != 9){
  
   for (int i = 0; i< 4; i++){
   leds[Nine[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 9){
    for (int i = 3; i< 4; i++){
    leds[Nine[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 8 && sh != 8){
for (int i = 0; i< 4; i++){
leds[Eight[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 8 && sh != 8){
for (int i = 3; i< 4; i++){
leds[Eight[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


    //50-54 aka strip 10

if (m >= 50 && m < 55) { 
 if (h != 10){
  
   for (int i = 0; i< 4; i++){
   leds[Ten[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 10){
    for (int i = 3; i< 4; i++){
    leds[Ten[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 9 && sh != 9){
for (int i = 0; i< 4; i++){
leds[Nine[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 9 && sh != 9){
for (int i = 3; i< 4; i++){
leds[Nine[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }


     //55-59 aka strip 11

if (m >= 55 && m < 60) { 
 if (h != 11){
  
   for (int i = 0; i< 4; i++){
   leds[Eleven[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal);
} } 

 if (h == 11){
    for (int i = 3; i< 4; i++){
    leds[Eleven[i]] = CHSV (minuteHandHue, minuteHandSat, minuteHandVal); } }

//turn off previous
if (h != 10 && sh != 10){
for (int i = 0; i< 4; i++){
leds[Ten[i]] = CHSV (minuteHandHue, minuteHandSat, 0); } }

if (h == 10 && sh != 10){
for (int i = 3; i< 4; i++){
leds[Ten[i]] = CHSV (minuteHandHue, minuteHandSat, 0); }}


LEDS.show();

 }
}

