/*
Faça uma função que receba como parâmetro um vetor com n
inteiros e inverta as posições dos elementos de maneira que o
primeiro elemento troque de valor com o último, o segundo com o
penúltimo e assim por diante. (inverter as posições dos elementos
do vetor)
*/

#include <stdio.h>

void reverseVet (int vet[], int size) {
    int i, j, temp;

    i = 0;
    j = size - 1;

    while (i < j) {
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
        i++;
        j--;
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
    int size, i; 

    printf("Tamnho do vetor: ");
    scanf("%d%*c", &size);

    int vet[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }

    reverseVet(vet, size);
    showVet(vet, size);

}