#include <stdio.h>

int main(){
  double l, r, p, b;

  printf("Enter amount of loan: ");
  scanf("%lf", &l);
  printf("Enter interest rate: ");
  scanf("%lf", &r);
  printf("Enter monthly payment: ");
  scanf("%lf", &p);

  r = 1 + r/100.0/12.0;
  b = l;

  printf("Balance remaining after first payment: $%.2f \n", b = r*b-p);
  printf("Balance remaining after seconf payment: $%.2f \n", b = r*b-p);
  printf("Balance remaining after third payment: $%.2f \n", b = r*b-p);

  return 0;
}
