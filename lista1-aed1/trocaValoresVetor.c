// Prova curta I
//Faça uma função que receba um vetor de inteiros e seu tamanho como parâmetros. A função deve trocar o valor de cada elemento de posição ímpar do vetor com o valor do elemento de posição imediatamente anterior (elementos trocam de valor!). Veja o exemplo dado para um vetor de 8 elementos:
//Antes: 0  1  2  3  4  5  6  7
//       50 20 13 12 6 10 11 15

//Depois: 0  1  2  3  4  5  6  7
//        20 50 12 13 10 6 15 11
#include <stdio.h>

void trocaValores(int vet[], int size) {
    int i, temp;
    
    for (i = 0; i < size; i++) {
        
        if (i %2 != 0) {
            temp = vet[i];
            vet[i] = vet[i - 1];
            vet[i - 1] = temp;
        }
    }
}

void mostraVetor(int vet[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    
    int size, i;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &size);
    
    int vet[size]; 
    
    for (i =0; i < size; i++) {
        scanf("%d", &vet[i]);
    }
    
    trocaValores(vet, size);
    
    mostraVetor(vet, size);
    return 0;
}