
#include <stdio.h>

int main() {
    char c;
    // Write C code here
    printf("entrez un caractère:");
    scanf("%c",&c);
    if ((c>='a') && (c<='z')||(c>='A') && (c<='Z')){
      printf("le caractère '%c' est un alphabet\n",c);
    }
      if ((c>='a') && (c<='z')){
          printf("il s'agit d'une miniscule\n");}
          else if ((c>='A') && (c<='Z')){
              printf("il s'agit d'une majuscule\n");
              }
              else
              printf("le caractére '%c' n'est pas un alphabet",c);

    return 0;
}
