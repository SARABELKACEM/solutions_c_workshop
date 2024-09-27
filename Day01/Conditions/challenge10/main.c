
#include <stdio.h>
int main(){
int J,A,M;
  const char *moisTexte[] = {
      "Janvier","Fevrier","Mars","Avril",
      "Mai","Juin","Juillet","Aout",
      "Septembre","Octobre","Novembre","Decembre"
  };
printf("entrez une date:");
scanf("%d/%d/%d", &J, &M, &A);
  if(M>=1 && M<=12) {
     printf("%d %s %d\n",J,moisTexte[M-1],A);
  }
    else {
      printf("mois invalide.\n");
    }
    return 0;
}





