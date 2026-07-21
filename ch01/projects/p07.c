#include <stdio.h>

int main(){
  int a;
  int temp;
  printf("Enter an amount: ");
  scanf("%d", &a);
  temp = a/20;
  printf("$20 bills : %d\n", temp);
  a = a%20;
  temp = a/10;
  printf("$10 bills : %d\n", temp);
  a = a%10;
  temp = a/5;
  printf(" $5 bills : %d\n", temp);
  a = a%5;
  temp = a/1;
  printf(" $1 bills : %d\n", temp);

  return 0;
}
