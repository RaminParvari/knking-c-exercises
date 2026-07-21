#include <stdio.h>

int main(){
  double amount;
  double amount_plus_tax;
  printf("Enter an amount: ");
  scanf("%lf", &amount);
  amount_plus_tax = 1.05*amount;
  printf("With tax aded: %.2f\n", amount_plus_tax);

  return 0;
}
