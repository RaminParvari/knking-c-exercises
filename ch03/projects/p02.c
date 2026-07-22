#include <stdio.h>

int main(){

  int m,d,y;
  int nbr;
  float price;
 
  printf("Enter item number: ");
  scanf("%d", &nbr);
 
  printf("Enter unit price: ");
  scanf("%f", &price);
 
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);
 
  printf("Item        Unit        Purchase\n");
  printf("            Price       Date\n");
  printf("%d         $%7.2f    %.4d/%.2d/%.2d\n", nbr, price, y,m,d);
 
  return 0;
}
