#include <stdio.h>

int main()
{ 

  int g1, g2, g3, g4, g5;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &g1, &g2, &g3, &g4, &g5);
  
  printf("GS1 prefix: %d\n", g1);
  printf("Group identifier: %d\n", g2);
  printf("Publisher code: %d\n", g3);
  printf("Item number: %d\n", g4);
  printf("Check digit: %d\n", g5);

  return 0;
}
