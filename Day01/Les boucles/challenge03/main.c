

#include <stdio.h>

int main() {
    int n;
    long s;
    // Write C code here
    printf("entrez un nombre entier:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        s += i ;
    }
      printf("%d = %ld \n",n,s);
    return 0;
}
