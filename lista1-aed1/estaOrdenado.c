/*
Faça uma função que receba como parâmetro um vetor de
inteiros (V) e retorne verdadeiro caso o vetor esteja ordenado de
forma crescente (V[i] <= V[j] se i<j)
*/

#include <stdio.h>

char sort(int vet[], int size) {
    int i, cont;

    for (i = 0; i < size; i++) {
        if (vet[i] <= vet[i + 1]) {
            cont++;
        }
    }
    if (cont == size - 1) {
        return 1;
    } else {
        return 0;
    }
}

int main () {

    int size, i;
    char result;

    printf("Tamanho do vetor: ");
    scanf("%d%*c", &size);

    int vet[size];

    for (i = 0; i < size; i++) {
        scanf("%d%*c", &vet[i]);
    }

    result = sort(vet, size);

    if (result == 1) {
        printf("Verdadeiro!\n");
    } else {
        printf("Falso!\n");
    }
}