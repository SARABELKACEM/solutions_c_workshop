#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, z1, x2, y2, z2, d;
    printf("donner les coordonnee des deux points (x1,x2) (y1,y2) (z1,z2):\n");
    scanf("%f%f%f%f%f%f",&x1,&y1,&z1,&x2,&y2,&z2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("la distance est:%.2f/n",&d);
    return 0;
}
