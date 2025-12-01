#include <stdio.h>
int main(){
float p,t,r,si;
printf("enter the principle rate and time\n");
scanf("%f %f %f",&p,&r,&t);
si = (p*t*r)/100;
printf("the simple interest is %.2f",si);
return 0;
}
