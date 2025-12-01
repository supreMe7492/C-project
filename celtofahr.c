#include <stdio.h>
int main(){
  float cels,fahr;
  printf("Enter the temperature in the celsius\n");
  scanf("%f",&cels);
  fahr = (cels * 9/5) + 32;
  printf("%.2f celsius is %.2f fahrenhite",cels,fahr);
  return 0;
}
