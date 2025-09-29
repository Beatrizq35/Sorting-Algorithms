/*
Seja o vetor de inteiros abaixo. Quantas posições do vetor deverão ser comparadas com a chave 200 se
eu utilizar busca binária ? Mostre a sequencia de elementos comparados com a chave na ordem em que os
mesmos forem comparados
1 3 9 14 17 22 24 26
*/
#include <stdio.h>

void compara (int vet[],unsigned size, int key) {
    unsigned i;
    int start = 0;
    int end = size - 1;
    int mid;
    int find;

    while (start <= end) {
        mid = (start + end) / 2;
        if (key > vet[mid]) {
            start = mid + 1;
            
        }
        else if (key < vet[mid]) {
            end = mid - 1;
        } else {
            find = 1;
        }
        printf("%d ", vet[mid]);
    }
    
}

void readVet (int vet[], unsigned size) {
    unsigned i;

    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }
}

int main () {
    unsigned size;
    printf("Tamanho do vetor: \n");
    scanf("%u%*c", &size);

    int key;
    printf("Chave para comparacao: \n");
    scanf("%u%*c", &key);

    int vet[size];
    readVet(vet, size);
    compara(vet, size,key);
}