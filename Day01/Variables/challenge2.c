
#include <stdio.h>
int main () {
  float c,k;
  printf("Entrer votre temperature en celsius:");
  scanf("%f",&c);
  k = c + 273.15 ;
  printf("kelvin = %f",k);

  return 0;
}
