
#include <stdio.h>

int main() {
    int n, s = 0;

    // Write C code here
    printf("donner le nombre d'éléments du tableau:\n");
    scanf("%d",&n);
    int tableau[n];
    for(int i=0;i<n;i++){
        printf("saisir les éléments du tableau:%d\n",i+1 );
        scanf("%d",&tableau[i]);
        s+=tableau[i];
    }
    printf("la somme totale est:%d\n",s);
    return 0;
}
