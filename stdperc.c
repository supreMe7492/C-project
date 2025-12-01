#include <stdio.h>
int main(){
  float a,b,c,d,e,f,g;
  float percentage;
  printf("Enter the marks of first subject:\t");
  scanf("%f",&a);
  
  printf("Enter the marks of second subject: ");
  scanf("%f",&b);
  printf("Enter the marks of third subject: ");
  scanf("%f",&c);
  printf("Enter the marks of fourth subject: ");
  scanf("%f",&d);
  printf("Enter the marks of fifth subject: ");
  scanf("%f",&e);
  printf("Enter the marks of sixth subject: ");
  scanf("%f",&f);
  printf("Enter the marks of seventh subject: ");
  scanf("%f",&g);
  
  float total;
  total = a+b+c+d+e+f+g;
  percentage = ((total)/(700))*100;
  printf("the percent obtained is %.2f",percentage);
  return 0;
}
