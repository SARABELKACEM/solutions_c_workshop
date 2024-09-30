
#include <stdio.h>
#include <string.h>

#define MAX_lvrs 500
typedef struct{
    char titre[500];
    char auteur[500];
    float prix;
    int quantité;
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
    printf("la quatité en stock:");
    scanf("%d",&stock[nb_livre].quatité);
         nb_livre++;
    printf("livre ajouté avec succée ! \n");
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
        printf("Quantité: %d\n",stock[i].quantité);
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
            printf("livre trouvé %n");
            printf("Titre:%s\n",stock[i].titre);
            printf("L'auteure:%s\n",stock[i].auteur);
            printf("Prix:%.2f\n",stock[i].prix);
            printf("Quantité:%d\n",stock[i].quantité);
             return;
          }
       }
        printf("livre non trouvé.\n");
    }
void misAjourquatité(){
    char titre[500];
    int nouvelle_quantité;
    printf("entrez le titre de livre:");
    scanf("%[^\n]",titre);
    for(i=0;i<nb_livre;i++){
        if(strcmp(stock[i].titre,titre)==0){
            printf("entrez la nouvelle quantité:");
            scanf("%d\n",&nouvelle_quantité);
            stock[i].quantité = nouvelle_quantité;
            printf("Quantite mise a jour avec succes:\n");
              return;
        }
    }
    printf("livre non trouvé. \n");
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
                printf("livre supprimé avec succes:\n");
                  return;
            }
        }
        printf("livre non trouvé.\n");
    }
    void afficherTotalLivre(){
        int total = 0;
        for(i=0;i<nb_livre;i++){
            total += stock[i].quantité;
        }
        printf("Le nombre total de livres en stock:%d\n",total);
    }
