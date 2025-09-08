/*
Faça uma função que receba como parâmetro um vetor de
inteiros, o número de elementos do vetor e um parâmetro de
referência de valor inteiro delta. A função deve substituir cada
elemento do vetor pela diferença entre seu valor original e delta.
*/

#include <stdio.h>

void diferencaDelta (int vet[], int size, int delta) {
    int delt, i;

    for (i = 0; i < size; i++) {
        delt = vet[i] - delta;
        vet[i] = delt;
    }
}

void showVet (int vet[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}


int main () {
    int size, i, delta;

    printf("Tamanho do vetor: ");
    scanf("%d%*c", &size);

    printf("Valor Delta: ");
    scanf("%d%*c", &delta);

    int vet[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }

    diferencaDelta(vet, size, delta);
    showVet(vet, size);
}