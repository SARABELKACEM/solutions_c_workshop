
#include <stdio.h>
int main(){
int h1 ,m1 ,s1 ,h2 ,m2 ,s2;
printf("entrez le premier instant:");
scanf("%d:%d:%d",&h1,&m1,&s1);
printf("entrez le deuxieme instant:");
scanf("%d:%d:%d",&h2,&m2,&s2);
 if (h1<h2||(h1==h2 && m1<m2)||(h1==h2 && s1<s2)){
     printf("le premier instant vient avant le deuxieme.\n");
 }
   else if (h1>h2||(h1==h2 && m1>m2)||(h1==h2 && s1>s2)){
       printf("le deuxieme instant vient avant le premiere.\n");
   } else {
printf("il s'agit du meme instant.\n");
}
return 0;
}
