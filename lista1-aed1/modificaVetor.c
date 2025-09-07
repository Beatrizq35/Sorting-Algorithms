/*
Faça uma função que receba como parâmetro um vetor de
inteiros e seu tamanho. A função deve modificar o vetor de
maneira que:
a) Elementos com valor original menor ou igual a 0 fiquem com o
valor -2;
b) Elementos cujo valor original (vo) esteja no intervalo (1<= vo
<= 5) fiquem com o valor -1;
c) Elementos que não sejam enquadrados nos itens a ou b recebam
o valor 0.
*/

#include <stdio.h>

void modificaVetor (int vet[], int size){
    int i;

    for (i = 0; i < size; i++) {
        if (vet[i] <= 0) {
            vet[i] = -2;
        } else if ((vet[i] >= 1) && (vet[i] <= 5)) {
            vet[i] = -1;
        } else {
            vet[i] = 0;
        }
    }

}

void showVet (int vet[], int size) {
    int i; 

    for (i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
}

int main() {

    int size, i;

    printf("Tamanho do Vetor: ");
    scanf("%d", &size);

    int vet[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &vet[i]);
    }

    modificaVetor(vet, size);
    showVet(vet, size);

}