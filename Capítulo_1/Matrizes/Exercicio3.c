/*
Faça um programa que declare uma matriz de tamanho 5 × 5. 
Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Ao final, escreva a matriz obtida na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

int main (void) {
    int matriz[MAX][MAX];
    int i,j;

    for (i=0;i<MAX;i++)
        for (j=0;j<MAX;j++)
            if (i==j)
                matriz[i][j]=1;
            else 
                matriz[i][j]=0;
    for (i=0;i<MAX;i++) {
        for (j=0;j<MAX;j++) {
            printf ("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return (0);
}