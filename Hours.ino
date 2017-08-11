//hours

void hours () {
//12
if (h == 0) { 
   for (int i = 0; i< 3; i++){
   leds[Twelve[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);
} 

if (m < 55 && s < 55){
for (int i = 0; i< 3; i++){
leds[Eleven[i]] = CHSV (hourHandHue, hourHandSat, 0);
} }

LEDS.show();
}

//1
if (h == 1 ) { 
   for (int i = 0; i< 3; i++){
   leds[One[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (m >= 5 && s >= 5){
for (int i = 0; i< 3; i++){
leds[Twelve[i]] = CHSV (hourHandHue, hourHandSat, 0);
}}

LEDS.show();
}


//2
if (h == 2) { 
   for (int i = 0; i< 3; i++){
   leds[Two[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 1 && sh != 1){
for (int i = 0; i< 3; i++){
leds[One[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}


//3
if (h == 3) { 
   for (int i = 0; i< 3; i++){
   leds[Three[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 2 && sh != 2){
for (int i = 0; i< 3; i++){
leds[Two[i]] = CHSV (hourHandHue, hourHandSat, 0);}}
LEDS.show();
}


//4
if (h == 4) { 
   for (int i = 0; i< 3; i++){
   leds[Four[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 3 && sh != 3){
for (int i = 0; i< 3; i++){
leds[Three[i]] = CHSV (hourHandHue, hourHandSat, 0);
} }
LEDS.show();
}


//5
if (h == 5) { 
   for (int i = 0; i< 3; i++){
   leds[Five[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 4 && sh != 4){
for (int i = 0; i< 3; i++){
leds[Four[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}



//6
if (h == 6) { 
   for (int i = 0; i< 3; i++){
   leds[Six[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 5 && sh != 5){
for (int i = 0; i< 3; i++){
leds[Five[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}



//7
if (h == 7) { 
   for (int i = 0; i< 3; i++){
   leds[Seven[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 6 && sh != 6){
for (int i = 0; i< 3; i++){
leds[Six[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}


//8
if (h == 8) { 
   for (int i = 0; i< 3; i++){
   leds[Eight[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 7 && sh != 7){
for (int i = 0; i< 3; i++){
leds[Seven[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}


//9
if (h == 9) { 
   for (int i = 0; i< 3; i++){
   leds[Nine[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 8 && sh != 8){
for (int i = 0; i< 3; i++){
leds[Eight[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}

//10
if (h == 10) { 
   for (int i = 0; i< 3; i++){
   leds[Ten[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 9 && sh != 9){
for (int i = 0; i< 3; i++){
leds[Nine[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}
LEDS.show();
}

//11
if (h == 11) { 
   for (int i = 0; i< 3; i++){
   leds[Eleven[i]] = CHSV (hourHandHue, hourHandSat, hourHandVal);}

if (mh != 10 && sh != 10){
for (int i = 0; i< 3; i++){
leds[Ten[i]] = CHSV (hourHandHue, hourHandSat, 0); }
}

} 
}//end loop
//extra universal stuff that makes the clock work
void extras (){

if (m < 5) {mh = 0;}
if (m >=5 && m <10) {mh = 1;}
if (m >= 10 && m <15) {mh = 2;}
if (m >= 15 && m <20) {mh = 3;}
if (m >= 20 && m <25) {mh = 4;}
if (m >= 25 && m <30) {mh = 5;}
if (m >= 30 && m <35) {mh = 6;}
if (m >= 35 && m <40) {mh = 7;}
if (m >= 40 && m <45) {mh = 8;}
if (m >= 45 && m <50) {mh = 9;}
if (m >= 50 && m <55) {mh = 10;}
if (m >= 55 && m <60) {mh = 11;}

if (s < 5) {sh = 0;}
if (s >=5 && s <10) {sh = 1;}
if (s >= 10 && s <15) {sh = 2;}
if (s >= 15 && s <20) {sh = 3;}
if (s >= 20 && s <25) {sh = 4;}
if (s >= 25 && s <30) {sh = 5;}
if (s >= 30 && s <35) {sh = 6;}
if (s >= 35 && s <40) {sh = 7;}
if (s >= 40 && s <45) {sh = 8;}
if (s >= 45 && s <50) {sh = 9;}
if (s >= 50 && s <55) {sh = 10;}
if (s >= 55 && s <60) {sh = 11;}


if (mh != 0 && sh != 0 && h != 0) {
    for (int i = 0; i< 5; i++){
   leds[Twelve[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}

if (sh != 0) {
    for (int i = 4; i< 5; i++){
   leds[Twelve[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}


if (mh != 0 && sh != 0) {
    for (int i = 3; i< 5; i++){
   leds[Twelve[i]] = CHSV (hourHandHue, hourHandSat, 0);}
}

}

