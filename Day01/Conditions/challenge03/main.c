#include <stdio.h>
#include <math.h>

int main() {
    int a,b,S,T;
    printf("entrer deux nombres entier:");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    S = a + b ;
    if (a==b){
    S = S * 3 ;
    }
    printf("la somme est: %d",&S);

    return 0;
}

