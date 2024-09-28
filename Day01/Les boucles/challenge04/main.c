
#include <stdio.h>

int main() {
    int n,i=1,count=0;

    // Write C code here
    printf("entrez un nombre entier:");
    scanf("%d",&n);
    while (count<n){
        if(i %2 != 0){
         printf("%d,",i);
         count++;
        }
        i++;
    }
      printf("\n");
    return 0;
}
