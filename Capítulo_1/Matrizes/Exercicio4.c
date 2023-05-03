/*
Leia uma matriz de tamanho 4 × 4. 
Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

int main (void) {
    float matriz[MAX][MAX];
    int i,j,maior10=0;

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
          if (matriz[i][j]>10)
            maior10++;
        }
    }
    printf("A matriz possui %d valores maiores do que 10",maior10);
    return (0);
}