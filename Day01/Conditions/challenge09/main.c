
#include <stdio.h>

int main() {
    char c;
    // Write C code here
    printf("entrez un caract�re:");
    scanf("%c",&c);
    if ((c>='a') && (c<='z')||(c>='A') && (c<='Z')){
      printf("le caract�re '%c' est un alphabet\n",c);
    }
      if ((c>='a') && (c<='z')){
          printf("il s'agit d'une miniscule\n");}
          else if ((c>='A') && (c<='Z')){
              printf("il s'agit d'une majuscule\n");
              }
              else
              printf("le caract�re '%c' n'est pas un alphabet",c);

    return 0;
}
