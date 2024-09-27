
#include <stdio.h>
int main()
{
int n;
printf("entrez un nombre:");
scanf("%d",&n);
if (n<0){
    printf("le nombre est negatif");
}
else if (n>0)
    printf("le nombre est positif");
else
    printf("le nombre est nul");
   return 0 ;
   }
