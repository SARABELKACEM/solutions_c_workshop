#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr,U,D,C,M,Inverse;
    printf("donner un nombre entier à quatre chiffre: ");
    scanf("%d",&nbr);
    U=nbr%10;
    D=(nbr/10)%10;
    C=(nbr/100)%10;
    M=(nbr/1000);
    Inverse=(U*1000+D*100+C*10+M);
    printf("l inverse est:%d",&Iverse);
    return 0;
}
