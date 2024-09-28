#include <stdio.h>

int main() {
    int n;
    // Write C code here
    printf("entrez un nombre entier:");
    scanf("%d",&n);
       for (int i=1;i<=n;i++){
         printf("%d,",2 * i);
       }


    return 0;
}
