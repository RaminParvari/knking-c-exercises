#include <stdio.h>

int main()
{ 

  int n1, n2, d1, d2, num, den;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

  num = d1*n2+d2*n1;
  den = d1*d2;
  
  printf("The sum is: %d/%d\n", num, den);

  return 0;
}
