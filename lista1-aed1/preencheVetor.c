/*
Faça uma função que coloque em cada elemento de um vetor de inteiros passado como parâmetro o
valor 0 se o número é par e o valor 1 se o número é impar. Ao final, seu vetor terá apenas os valores 0 ou 1
no lugar dos valores originais passados. A função deve retornar o valor 1 se o vetor original tiver mais
elementos pares do que ímpares, retornando 0 em caso contrário.
*/

#include <stdio.h>

void readVet (int vet[], unsigned size) {
    unsigned i;

    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }
}

char preencheVet (int vet[], unsigned size) {
    unsigned i;
    int contOne = 0;
    int contZero = 0;

    for (i = 0; i < size; i++) {
        if (vet[i] % 2 == 0) {
            vet[i] = 0;
            contZero++;
        }
        else {
            vet[i] = 1;
            contOne++;
        }
    }

    if (contZero > contOne) {
        return 1;
    }

    return 0;
}

int main () {
    unsigned size;

    scanf("%u", &size);
    int vet[size];
    readVet(vet, size);

    if (preencheVet(vet, size)) {
        printf("A quantidade maior é de Números Pares\n");
    }
    else {
        printf("A quantidade maior é de Números Ímpares\n");
    }
    return 0;
}