#include <stdio.h>

int main(){
  double x, p;
  printf("Enter the value of x: ");
  scanf("%lf", &x);
  p = 3*x*x*x*x*x;
  p += 2*x*x*x*x;
  p -= 5*x*x*x;
  p -= x*x;
  p += 7*x;
  p -= 6;
  printf("Polynomial Value: %f\n",p);

  return 0;
}
