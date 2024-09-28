
#include <stdio.h>

int main() {
    int n;
    long f = 1;
    // Write C code here
    printf("entrez un nombre entier positive:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        f *= i ;
    }
      printf("%d! = %ld \n",n,f);
    return 0;
}
