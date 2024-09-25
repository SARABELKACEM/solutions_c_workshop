#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,V,M_PI;
    printf("donner le rayon de la sphere:\n");
    scanf("%f",&r);
    V = (4/3)*M_PI*pow(r,3);
    printf("le volume de la sphere est:%.2f",&V);
    return 0;
}
