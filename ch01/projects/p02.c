#include <stdio.h>

int main(){
  double r = 10.0;
  double v;
  v = 4.0/3.0*3.1415*r*r*r;
  printf("Valume equals to %f m^3\n", v);
  printf("Valume equals to %.3f m^3\n", v);
  printf("Valume equals to %10.3f m^3\n", v);

  return 0;
}
