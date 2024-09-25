#include <stdio.h>
#include <stdlib.h>

int main()
{
    float S,L,l;
    printf("donner la largeur du rectangle l:");
    scanf("%f",&l);
    printf("donner la longueur du rectangle L:");
    scanf("%f",&L);
    S = L * l ;
    printf("la surface du rectangle est:%.2f",&S);

}
