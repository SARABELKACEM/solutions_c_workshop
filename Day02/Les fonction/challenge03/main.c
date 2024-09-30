
#include <stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int main() {
    int x,y;
    printf("entrez deux nombre entier:\n");
    scanf("%d%d",&x,&y);
    printf("le max est:%d",max(x,y));
    return 0;
}
