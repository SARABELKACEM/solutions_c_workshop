#include <stdio.h>
#include <stdio.h>
int main()
{
int A,M,J,h,m,s;
printf("entrez une annee:");
scanf("%d",&A);
M = A * 12;
J = A * 365;
h = A * 365 * 24;
m = A * 365 * 24 * 60;
s = A * 365 * 24 * 60 * 60;
printf("mois = %d\n",M);
printf("jours = %d\n",J);
printf("heures = %d\n",h);
printf("minutes = %d\n",m);
printf("secondes = %d\n",s);
   return 0 ;
   }
