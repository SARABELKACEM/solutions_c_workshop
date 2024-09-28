#include <stdio.h>

int main() {
    int e,b;
    long resultat=1;
    // Write C code here
    printf("entrez une base:");
    scanf("%d",&b);
    printf("entrez un exposant:");
    scanf("%d",&e);
    for (int i=1;i<=e;i++){
        resultat *= b; }
         printf("%d ^ %d =%ld",e,b,resultat);


    return 0;
}
