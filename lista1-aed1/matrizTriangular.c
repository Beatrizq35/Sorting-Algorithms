/*
Fazer uma função que pegue uma matriz de numeros reais de ordem NxN e 
retorne verdadeiro se ela for triangular superior. Retorne falso em caso contrário
*/
#include <stdio.h>
#define N 2


char matrizTriangular(int mat[N][N]) {
    int l, c;
    
    for (l = 0; l < N; l++) {
        for (c = 0; c < N; c++) {
            if ((l > c) && (mat[l][c] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

void lerMatriz(int mat[N][N]) {
    int l, c;
    
    for (l = 0; l < N; l++) {
        for (c = 0; c < N; c++) {
            scanf("%d%*c", &mat[l][c]);
        }
    } 
}

int main() {
    int mat[N][N];
    
    lerMatriz(mat);
    
    if (matrizTriangular(mat)) {
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}