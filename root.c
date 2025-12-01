#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c;
  float sqrroot;
  float first_root,second_root;
  printf("enter the three coeffiecient of the given equation\n");
  scanf("%f %f %f",&a,&b,&c);
  sqrroot = sqrtf((b*b)-(4*a*c));
  first_root = (-b+sqrroot)/(2*a);
  second_root = (-b-sqrroot)/(2*a);
  printf("The first root is %.2f\n",first_root);
  printf("The second root is %.2f\n",second_root);
  return 0;
}
