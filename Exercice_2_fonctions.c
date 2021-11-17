#include <stdio.h>
    /*Exercice 2 :
Écrire un programme qui permet de remplir un tableau avec des flottants (floats),
et créer ensuite une fonction(avec des paramètres) qui permet de chercher un élément dans dans ce tableau.
L'élément à chercher est saisi par l’utilisateur, donc il a ffiche Trouvé ou Nontrouvé et affiche le tableau trié*/




    //fonction de reherche d'une valeur 'x'
    void recherche(float T[100],int n){
        float x;
        int i;
        int search = 0;
            scanf("%f",&x);
        for(i=0;i<n;i++){            //boucle de recherche
            if (T[i] == x){
                search = 1;
        }}
        if (search==0){
            printf("********************************* la valeur %.2f n'existe pas dans le tableau ***************************************" ,x);
            printf("\n");
        }

        else
            printf("********************************* la valeur %.2f existe dans le tableau *************************************** " ,x);
            printf("\n");
        }

    //fonction de tri a bulle
    void changer(float *posX, float *posY)
        {
            float  temp = *posX;
                   *posX = *posY;
                   *posY = temp;
        }
    void tri_Bulle(float T[], int n)
        {
            int i, j;
            for (i = 0; i < n-1; i++)

    // les elements i sont deja en place
            for (j = 0; j < n-i-1; j++)
                if (T[j] > T[j+1])
                    changer(&T[j], &T[j+1]);
        }
    /* Fonction pour afficher tableau */


    void printT(float T[100], int n)
        {
            int i;
            for (i=0; i < n; i++)
            printf("| %.2f  ", T[i]);
            printf("\n");
        }

    //main code

    int main ()
        {
        int i,n;
        float T[100] ;
        //insertion nombre des elements du tableau
        printf ("Veillez entrer le nombre des elements du tableau :  ");
        scanf ("%d",&n);
        //insertion des elements du tableau
        printf("Maintenant Saisisser les elements du tableau : ");
        for(i=0;i<n;i++)
        {
            printf("\nT[%d] : ",i);
            scanf("%f",&T[i]);
        }
        printf("Veuiller saisir le nombre a chercher : ");
        //appel au fonction
        recherche(T,n);
        tri_Bulle(T,n);
        printf("Voicie le tableau trier : \n");
        printT(T,n);

        return 0;
        }
