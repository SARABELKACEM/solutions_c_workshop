

#include <stdio.h>
int main()
{
char c;
printf("entrez un caractere:");
scanf("%c",&c);
if (c<='A' && c>='Z'){
    printf("la lettre '%c'est majuscule",c);
}
else
    printf("la lettre '%c' n'est pas majususcule:",c);
   return 0 ;
   }
