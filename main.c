#include <stdio.h>
#include <string.h>
char amis[6][255];
int nbamis=0;
void saisir_amis();
void afficher_amis();
void menu();

void menu() {
    int choix=0;
printf("1-Saisir un ami\n");
printf("2-Voir tous les amis\n");
scanf("%d",&choix);
switch (choix)
{
    case 1:
        saisir_amis();
        break;
    case 2:
        afficher_amis();
        break;

}


}

void afficher_amis() {
    for(int j=0;j<nbamis;j++)
    {
        for(int i=0;i<strlen(amis[j]);i++)
        {
            printf("%c",amis[j][i]);
        }
        printf("\n"); //retour à la ligne après chaque prénom
    }

}

void saisir_amis() {
char saisie[255]={};
scanf("%s",saisie);

/****** copie de la saisie dans le tableau******************/

for (int i = 0; i < strlen(saisie); i++) {
      amis[nbamis][i]=saisie[i];

} // peut être remplacé par strcpy(amis[nbamis],saisie);

    nbamis++;

}


int main() {
   while(nbamis!=6)
   {
     menu();
   }
    return 0;
}