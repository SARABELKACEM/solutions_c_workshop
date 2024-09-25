


#include <stdio.h>
int main() {
    char car;
    printf("entrer un caractrere:");
    scanf("%c",&car);
    switch (car) {
    case'a':
    case'e':
    case'u':
    case'i':
    case'o':
    case'A':
    case'E':
    case'U':
    case'I':
    case'O':
    printf("le caractere %c est une voyelle:",&car);
    break;
default:
    printf("le caractere %c c est pas une voyelle:",&car);
    break;

}
    return 0;
}
