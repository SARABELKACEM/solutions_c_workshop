
#include <stdio.h>
int min(int a, int b){
    return (a > b) ? b : a;
}
int main() {
    int x,y;
    printf("entrez deux nombre entier:\n");
    scanf("%d%d",&x,&y);
    printf("le min est:%d",min(x,y));
    return 0;
}
