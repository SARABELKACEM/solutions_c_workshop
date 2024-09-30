
#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
    return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    printf("entrez un nombre:\n");
    scanf("%d",&n);
    printf("le terme %d de la suite de fibonacci est:%d",
    n,fibonacci(n));
    return 0;
}
