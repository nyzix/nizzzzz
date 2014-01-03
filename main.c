#include <stdio.h>
#include <stdlib.h>

int ajouter_livre (int tab_livre[], int genre[], int *n)
{
    int i=0;
    int ajout=1;

    *n=0;

    while (ajout!=2)
    {
       printf("\n n=%d \n",*n);
        printf("Entrer la reference du livre :");
        scanf("%d",&tab_livre[*n]);
        printf("Entrer le genre du livre :");
        scanf("%d",&genre[*n]);
        *n=*n+1;

        printf(" Voulez vous ajouter un autre livre ? \n ");

        printf("\n 1.Oui \n");
        printf("\n 2.non \n");
        scanf("%d",&ajout);

    }

}
void affichage(int tab_livre[], int genre[],int *n)
{
    int i=0;
    printf("affichage n=%d",*n);
    for(i=0;i<*n;i++)
    {
        printf("\n %d %d \n ",tab_livre[i],genre[i]);
    }
}

int verifier_livre (int tab_livre  [], int n, int num_liv)

{
    int i;

    printf("Entrer la reference du livre que vous cherchez: \n ");
    scanf("%d",&num_liv);

     for(i=0;i<n;i++)
    {
        if (tab_livre[i]==num_liv)
        {
            printf("Ce Livre existe !  \n");
            break;
        }
        else if (tab_livre[i]!=num_liv)
        {
             printf("Ce Livre n'existe PAS !");
        }
    }
}




int main()
{
    int tab_livre[100];
    int genre[100];
    int choix;
    int *n;
    int num_liv;
    int quitter=1;


   while (quitter!=2)
   {
    *n=*n+1;
    ajouter_livre(tab_livre,genre,&n);
    affichage(tab_livre,genre,&n);

    printf("1. Ajouter un livre et son genre \n");
    printf("2. Afficher le nombre de livre acutel \n");
    printf("3. Verifier si un livre existe ou non \n");
    scanf("%d",&choix);

    switch(choix)
    {

    case 1:
    ajouter_livre(tab_livre,genre,&n);
    break;
    case 2:
    affichage(tab_livre,genre,&n);
    break;
    case 3:
    verifier_livre (tab_livre,n,num_liv);
    break;


        printf(" Voulez vous Quitter ? \n ");

        printf("\n 1.Oui \n");
        printf("\n 2.non \n");
        scanf("%d",&quitter);
   }

   }

    return 0;
}
