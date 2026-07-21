#include <stdio.h>

int main(){
  double r;
  double v;
  printf("Enter the radius of sphere in meter: ");
  scanf("%lf", &r);
  v = 4.0/3.0*3.1415*r*r*r;
  printf("Valume equals to %f m^3\n", v);

  return 0;
}
