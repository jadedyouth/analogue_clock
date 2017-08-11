void rotatingHands () {

 if (secondTest > 50) {
s++; secondTest = 0; 
}
if (s >59) {m = m + 5; s = 0;}
if (m >59) {h++; m = 0;}
if (h >11) {h = 0;} 
}

//like in movies where they travel through time
//reverse hands aren't written yet in the basic core so backwards is commented out till later
void crazyRotatingHands () {
/*
if (directionTimer > 20000) {
sDirection = random (0,2);
mDirection = random (0,2);
hDirection = random (0,2);
directionTimer = 0;}
*/
if (sDirection == 0) {
if (secondTest > 150) {
s = s + 5; secondTest = 0; 
}}
/*
if (sDirection == 1) {
if (secondTest > 50) {
s = s - 5; secondTest = 0; 
}}
*/
if (mDirection == 0) {
if (minuteTest > 200) {
m = m + 5; minuteTest = 0; 
}}
/*
if (mDirection == 1) {
if (minuteTest > 50) {
m = m - 5; minuteTest = 0; 
}}
*/
if (hDirection == 0) {
if (hourTest > 350) {
h++; hourTest = 0; 
}}
/*
if (hDirection == 1) {
if (hourTest > 50) {
h--; hourTest = 0; 
}}
*/
if (s >59) {s = 0;}
if (m >59) {m = 0;}
if (h >11) {h = 0;} 

if (s < 0) {s = 59;}
if (m < 0) {m = 59;}
if (h < 0) {h = 11;} 
  
}

