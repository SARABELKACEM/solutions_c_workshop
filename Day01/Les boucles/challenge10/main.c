
#include <stdio.h>

int main() {
    int n,s=0;
    // Write C code here
    printf("entrez un entier :");
    scanf("%d",&n);
      for (int i=1; i<=n; i++) {
          s += i ;
       }
         printf("la somme des %d premier entier est: %d\n",n,s);
    return 0;
}
