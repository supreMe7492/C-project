#include <stdio.h>
int main(){
  float r,v;
  printf("Enter the radius\n");
  scanf("%f",&r);
  v = (3.14*r*r*r)*4/3 ;
  printf("the volume is %.2f",v);
  return 0;
  
}
