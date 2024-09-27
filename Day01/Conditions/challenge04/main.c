#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,x1,x2,d;
    // Write C code here
    printf("entrer les cofficients a,b et c de lequation:");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0){
        x1 =(-b - sqrt(d))/(2*a) ;
        x2 =(-b + sqrt(d))/(2*a) ;
        printf("les solutions sont x1=%.2f et x2=%.2f",x1,x2);
    }
    else if (d==0){
        x1 = -b /2*a;
        printf("unique solution x=%f",&x1);
    }
    else
        printf("aucune solution");


    return 0;
}
