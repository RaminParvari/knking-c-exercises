#include <stdio.h>

int main(){
  double x, p;
  printf("Enter the value of x: ");
  scanf("%lf", &x);
  p = 3*x+2; 
  p = p*x -5;
  p = p*x -1;
  p = p*x +7;
  p = p*x-6;
  printf("Polynomial Value: %f\n",p);

  return 0;
}
