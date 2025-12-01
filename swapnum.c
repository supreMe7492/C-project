#include <stdio.h>
int main(){
  int a,b,c;
  printf("Enter the value of a and b\n");
  scanf("%d %d",&a,&b);
  c=a;
  a=b;
  b=c;

  printf("after swap it becomes %d and %d",a,b);
  return 0;
}
