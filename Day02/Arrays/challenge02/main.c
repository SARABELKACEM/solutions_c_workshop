
#include <stdio.h>

int main() {
    int n;

    // Write C code here
    printf("donner le nombre d'�l�ments du tableau:\n");
    scanf("%d",&n);
    int tableau[n];
    for(int i=0;i<n;i++){
        printf("saisir les �l�ments du tableau:%d\n",i+1 );
        scanf("%d",&tableau[i]);
    }
    printf("les �l�ments du tableau sont:%d\n");
    for(int i=0;i<n;i++){
        printf("%d",tableau[i]);
    }
    return 0;
}
