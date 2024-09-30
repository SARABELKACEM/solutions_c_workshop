
#include <stdio.h>

int main() {
    int n, min;

    // Write C code here
    printf("donner le nombre d'éléments du tableau:\n");
    scanf("%d",&n);
    int tableau[n];
    for(int i=0;i<n;i++){
        printf("saisir les éléments du tableau:%d\n",i+1 );
        scanf("%d",&tableau[i]);
    }
    min = tableau[0];
    for(int i=1;i<n;i++){
        if (tableau[i]<min){
            min=tableau[i];
        }
    }
    printf("le plus petit élément est: %d\n",min);
    return 0;
}
