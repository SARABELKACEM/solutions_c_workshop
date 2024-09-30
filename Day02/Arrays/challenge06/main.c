
#include <stdio.h>

int main() {
    int n, f;

    // Write C code here
    printf("donner le nombre d'éléments du tableau:\n");
    scanf("%d",&n);
    int tableau[n];
    for(int i=0;i<n;i++){
        printf("saisir les éléments du tableau:%d\n",i+1 );
        scanf("%d",&tableau[i]);
    }
    printf("entrez le facteur de multiplication:");
    scanf("%d",&f);
    printf("tableau résultant:\n");
    for(int i=0;i<n;i++){
            tableau[i] *= f;
            printf("%d",tableau[i]);
        }
    return 0;
}
