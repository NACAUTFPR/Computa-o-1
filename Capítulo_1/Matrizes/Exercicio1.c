/*Faça um programa que leia uma matriz de tamanho 3 × 3. 
Imprima na tela o menor valor contido nessa matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3
#define MAX_LINHA 5
#define MAX_COLUNA 4

int main (void) {
    float matriz[MAX][MAX],menor;
    int i,j;

    srand(time(NULL));
    for (i=0;i<MAX;i++)
        for (j=0;j<MAX;j++)
            matriz[i][j]=(float) (rand()%10000)/100;
    

for (i=0;i<MAX;i++) {
        for (j=0;j<MAX;j++) {
            printf ("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

for (i=0;i<MAX;i++) {
        for (j=0;j<MAX;j++) {
            if ((i==0) && (j==0))
                menor=matriz[i][j];
            else if (matriz[i][j]<menor)
                menor = matriz[i][j];
        }
}
printf("O menor número da matriz é %.2f",menor);
return (0);
}