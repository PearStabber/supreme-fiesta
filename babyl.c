/**
  Author: Allen Junker
  Calculates the square root of a value using the Babylonian method
**/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
 double squareNum, adv, diff;

 printf("What number would you like to find the square root of?\n");
 scanf("%lf", &squareNum);

 if (squareNum < 0) {
   printf("This value has to be a positive number.\n");
   return(0);
 }
 adv = 1;
 diff = 1;
 while (diff > 0.00001) {
  adv = ((adv + (squareNum/adv))/2);
  diff = (adv - ((adv + (squareNum/adv))/2));
 }
 printf("Using the Babylonian method, the square root of %.4f is %.4f.\n", squareNum, adv);
 return(0);
}
