/*
Faça uma função que receba como parâmetro uma matriz de inteiros de ordem N x N e retorne a soma
dos valores contidos nas linhas pares da matriz . Considere o 0 como sendo par, assim, os valores a serem
somados serão os das linhas 0, 2, 4,... (2,5 pontos)
*/

#include <stdio.h>
# define N 3

int somaLinPar (int mat[N][N]) {
    unsigned i, j;
    int soma = 0;

    for (i = 0; i < N; i += 2) {
        for (j = 0; j < N; j++) {
            soma = soma + mat[i][j];
        }
    }
    return soma;
}

void readMatrix(int mat[N][N]) {
    unsigned l, c;
    
    for (l = 0; l < N; l++) {
        for (c = 0; c < N; c++) {
            scanf("%d%*c", &mat[l][c]);
        }
    } 
}

void showMatrix (int mat[N][N]) {
    unsigned i, j;

    for (i = 0; i < N; i++) {
        printf("[ ");
        for (j =0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("] \n");
    }
 }

int main () {
    int mat[N][N];

    readMatrix(mat);
    showMatrix(mat);
    printf("Soma das linhas pares: %d\n", somaLinPar(mat));

}