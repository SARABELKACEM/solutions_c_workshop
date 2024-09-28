


#include <stdio.h>

int main() {
    int n;
    // Write C code here
    printf("entrez un nombre entier positive:");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
      printf("%d * %d = %d\n",n,i,n * i);}
    return 0;
}
