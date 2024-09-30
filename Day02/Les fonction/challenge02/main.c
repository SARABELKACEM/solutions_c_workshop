
#include <stdio.h>
int produit(int a, int b){
    return a * b;
}
int main() {
    int x,y;
    printf("entrez deux nombre entier:\n");
    scanf("%d%d",&x,&y);
    printf("la multiplication est:%d",produit(x,y));
    return 0;
}
