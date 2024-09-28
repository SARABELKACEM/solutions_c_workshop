
#include <stdio.h>

int main() {
    int n,e_inv=0;
    // Write C code here
    printf("entrez un entier:");
    scanf("%d",&n);
       while (n!= 0) {
           e_inv = e_inv *10 + n %10 ;
           n /= 10;
       }
         printf("l'entier inverse est: %d\n",e_inv);
    return 0;
}
