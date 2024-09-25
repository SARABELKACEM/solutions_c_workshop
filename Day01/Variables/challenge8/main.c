#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c ,m_g;
    printf("donner trois nombres/n");
    scanf("%f%f%f",a,b,c);
    m_g = pow((a*b*c)^1/3);
    printf("la moyen geometrique est:%.2f/n",&m_g);

    return 0;
}
