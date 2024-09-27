#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int jour = rand() % 7;
    const char *joursSemaine[]={
        "lundi","mardi","mercredi","jeudi",
        "vendredi","samedi","dimanche"
    };
    printf("jour de la semaine: %s\n",joursSemaine[jour]);

    return 0;
}
