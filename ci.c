#include <stdio.h>
#include <math.h>
int main(){
  float p,t,r;
  printf("Enter the principle rate and time\n");
  scanf("%f %f %f",&p,&r,&t);
  float ci;
   ci = p*(powf((1+(r/100)), t)-1);
   printf("The compund interest is %.2f",ci);
   return 0;
}
