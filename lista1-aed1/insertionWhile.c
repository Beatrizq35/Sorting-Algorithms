/*
Implemente o algoritmo de ordenação por inserção em uma
função que receba como parâmetros um vetor de inteiros e seu
tamanho. A implementação deve ser feita sem a utilização do
comando “for” da linguagem C
*/

#include <stdio.h>

void insertionSort (int vet[], int size) {
    int i, j, pivot;

    i = 1;

    while (i < size) {
        pivot = vet[i];
        j = i - 1;

        while ((j >= 0) && (pivot < vet[j])) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = pivot; 
        i++;
    }
}

void showVet (int vet[], int size) {
    int i; 

    for (i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
}

int main () {
    int size, i;

    printf("Tamanho do vetor: ");
    scanf("%d%*c", &size);

    int vet[size];
    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }

    insertionSort(vet, size);
    showVet(vet, size); 
}