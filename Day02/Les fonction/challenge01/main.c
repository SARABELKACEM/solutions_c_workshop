
#include <stdio.h>
int somme(int a, int b){
    return a + b;
}
int main() {
    int x,y;
    printf("entrez deux nombre entier:\n");
    scanf("%d%d",&x,&y);
    printf("la somme est:%d",somme(x,y));
    return 0;
}
