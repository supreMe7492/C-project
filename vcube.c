#include <stdio.h>
int main(){
  int a,b,c,v;
  printf("Enter the three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  v= a*b*c;
  printf("the volume of the cube is %d",v);
  return 0;
}
