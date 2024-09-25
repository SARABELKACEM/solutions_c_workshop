#include<stdio.h>
int main (){
    float a,b;
    printf("donner les valeur de nombre a et b:");
    scanf("%f%f",&a,&b);

    printf("a + b = %.2f/n",a+b);
    printf("a - b = %.2f/n",a-b);
    printf("a * b = %.2f/n",a*b);
    if (b!=0){
        printf("a/b =%.2f/n",a/b);}
    else {
        printf("en peut pas diviser par zero/n");}
  return 0;
}













