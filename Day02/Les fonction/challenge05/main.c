
#include <stdio.h>
int factorielle(int a){
    if(a==0||a==1){
        return 1;
    }
    return a * factorielle(a-1) ;
}
int main() {
    int x;
    printf("entrez un nombre entier positif:\n");
    scanf("%d",&x);
    printf("la factorielle de %d est:%d" ,x,factorielle(x));
    return 0;
}
