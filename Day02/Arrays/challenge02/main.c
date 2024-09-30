
#include <stdio.h>

int main() {
    int n;

    // Write C code here
    printf("donner le nombre d'éléments du tableau:\n");
    scanf("%d",&n);
    int tableau[n];
    for(int i=0;i<n;i++){
        printf("saisir les éléments du tableau:%d\n",i+1 );
        scanf("%d",&tableau[i]);
    }
    printf("les éléments du tableau sont:%d\n");
    for(int i=0;i<n;i++){
        printf("%d",tableau[i]);
    }
    return 0;
}
