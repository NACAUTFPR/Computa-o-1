/*
Faça um programa que leia uma matriz de tamanho 4 × 4. 
Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

int main (void) {
    float matriz[MAX][MAX],maior;
    int i,j,indiceI,indiceJ;

    srand(time(NULL));
    for (i=0;i<MAX;i++)
        for (j=0;j<MAX;j++) {
            matriz[i][j]=(float) (rand()%10000)/100;
            if (rand()%2==1)
              matriz[i][j]=-1*matriz[i][j];
        }

    

    for (i=0;i<MAX;i++) {
        for (j=0;j<MAX;j++) {
            printf ("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<MAX;i++) {
        for (j=0;j<MAX;j++) {
            if ((i==0) && (j==0)) {
                maior=matriz[i][j];
                indiceI=i;
                indiceJ=j;
            }
            else if (matriz[i][j]> maior) {
                maior = matriz[i][j];
                indiceI=i;
                indiceJ=j;
            }
        }
    }


    printf("O maior número da matriz é %.2f localizado na posição [%d][%d]",maior,indiceI,indiceJ);
    return (0);
}