
#include <stdio.h>
int main()
{

float m;
printf("entre la moyenne:");
scanf("%f",&m);
if (m<10){
    printf("tu es récalé");}
 else if (m>=10 && m<12){
    printf("passable");}
 else if (m>=12 && m<14){
    printf("assez bien");}
 else if (m>=14 && m<16){
    printf("bien");}
 else
    printf("tres bien");

   return 0 ;
   }
