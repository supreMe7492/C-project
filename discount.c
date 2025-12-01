#include <stdio.h>
int main(){
  float amount,discount_amount,after_discount;
  printf("Enter the amount\n");
  scanf("%f",&amount);

   discount_amount = 0.1*amount;
   after_discount = amount - discount_amount;

   printf("the cost is RS.%.2f with RS.%.2f discount",after_discount,discount_amount);
   return 0;
}
