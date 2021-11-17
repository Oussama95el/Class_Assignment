#include <stdio.h>
#include <stdlib.h>

   float somme (float T[]){
        float S;
        int i;
        S = 0;
        for(i=0;i<10;i++)
            S=S + T[i];
        return S;
        }
   float produit (float T[]){

        float P ;
        int i;
        P = 1;
        for(i=0;i<10;i++)
            P = P * T[i];
        return P ;
        }
    float moyenne (float T[]){
        int i;
        float M , S , P  ;
        S = somme(T);
        M = S / 10;
        for(i=0;i<10;i++)
            P = P * T[i];
        return M ;
        }
    void PN(float T[]){
        int i;
        printf("\n les elements positifs du tableau sont :");
        for(i=0;i<10;i++){
            if(T[i]>0)
                printf("%.2f ",T[i]);
        }
        printf("\n les elements negatifs du tableau sont :");
        for(i=0;i<10;i++){
            if(T[i]>0)
                printf("%.2f ",T[i]);
    }
    }



    int main(){

        float T[10];
        int i;
        printf("Veuiller saisire les elements du tableau : \n");
        for(i=0;i<10;i++){
            printf("T[%d] =",i+1);
            scanf("%f",&T[i]);
        }
        printf(" la somme des elements du tableau est : %.2f ",somme(T));
        printf("\n le produit des elements du tableau est : %.2f ",produit(T));
        printf("\n la moyenne des elements du tableau est : %.2f ",moyenne(T));
        PN(T);


    return 0;
    }
