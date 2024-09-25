#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,w_a;
    printf("enter three numbers:");
    scanf("%f%f%f",n1,n2,n3);
    w_a = (n1*2 + n2*3 + n3*5)/(2+3+5);
    printf("weighted average=%.2f/n",w_a);
    return 0;
}
