
#include <stdio.h>
#include <string.h>

#define MAX_lvrs 500
typedef struct{
    char titre[500];
    char auteur[500];
    float prix;
    int quantit�;
}livre;
livre stock[MAX_lvrs];
int nb_livres = 0;

void ajouterlivre(){
    if (nb_livre < MAX_lvrs){
    printf("entrer le titre:");
    scanf("%[^\n]",stock[nb_livre].titre);
    printf("l'auteur du livre:");
    scanf("%[^\n]",stock[nb_livre].auteur);
    printf("le prix:");
    scanf("%f",&stock[nb_livre].prix);
    printf("la quatit� en stock:");
    scanf("%d",&stock[nb_livre].quatit�);
         nb_livre++;
    printf("livre ajout� avec succ�e ! \n");
} else {
    printf("le stock est plein ! \n");
   }
}
void afficherlivre(){
    if (nb_livre == 0){
        printf("aucun livre disponible dans le stock !\n");
    } else {
        for (int i=0; i<nb_livre; i++){
        printf("Livre: %d\n",i+1);
        printf("Titre: %s\n",stock[i].titre);
        printf("L'auteur: %s\n",stock[i].auteur);
        printf("Prix: %.2f\n",stock[i].prix);
        printf("Quantit�: %d\n",stock[i].quantit�);
        printf("\n");
       }
    }
}
void rechercherlivre(){
    char titre[500];
    printf("enrez le titre:");
    scanf("%[^\n]",titre);
    for(i=0;i<nb_livre;i++){
        if(strcmp(stock[i].titre,titre) == 0){
            printf("livre trouv� %n");
            printf("Titre:%s\n",stock[i].titre);
            printf("L'auteure:%s\n",stock[i].auteur);
            printf("Prix:%.2f\n",stock[i].prix);
            printf("Quantit�:%d\n",stock[i].quantit�);
             return;
          }
       }
        printf("livre non trouv�.\n");
    }
void misAjourquatit�(){
    char titre[500];
    int nouvelle_quantit�;
    printf("entrez le titre de livre:");
    scanf("%[^\n]",titre);
    for(i=0;i<nb_livre;i++){
        if(strcmp(stock[i].titre,titre)==0){
            printf("entrez la nouvelle quantit�:");
            scanf("%d\n",&nouvelle_quantit�);
            stock[i].quantit� = nouvelle_quantit�;
            printf("Quantite mise a jour avec succes:\n");
              return;
        }
    }
    printf("livre non trouv�. \n");
}
void supprimerlivre(){
    char titre[500];
    printf("entrez le titre de livre:");
    scanf("%[^\n]",titre);
    for(i=0;i<nb_livre-1;i++){
        if(strcmp(stock[i].titre,titre)== 0){
            for(int j=i,j<nb_livre,j++){
                stock[j] = stock[j+1];}
                nb_livre--;
                printf("livre supprim� avec succes:\n");
                  return;
            }
        }
        printf("livre non trouv�.\n");
    }
    void afficherTotalLivre(){
        int total = 0;
        for(i=0;i<nb_livre;i++){
            total += stock[i].quantit�;
        }
        printf("Le nombre total de livres en stock:%d\n",total);
    }
