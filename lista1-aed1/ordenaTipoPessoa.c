/*
Dado o tipoPessoa definido a seguir, faça uma função que receba um vetor de elementos do tipoPessoa e
seu tamanho. A função deve ordenar a primeira metade do vetor por nome e a segunda metade por altura,
utilizando para tanto o algoritmo de ordenação por inserção nos dois casos. Se houver número ímpar de
elementos, deixe a primeira metade com 1 elemento a mais. (2,5 pontos)
*/

#include <stdio.h>
#include <string.h>
# define N 4

typedef struct {
char nome[20];
float altura;
} tipoPessoa;

void readVectorPeople (tipoPessoa vet[], unsigned size) {
  unsigned i;

  for(i = 0 ; i < size; i++) {
    printf("Nome: "); 
    scanf("%[^\n]%*c",vet[i].nome);
    printf("Altura: "); 
    scanf("%f%*c",&vet[i].altura);
  }
}

void showVectorPeople (tipoPessoa vet[], unsigned size) {
    unsigned i;

    for (i = 0; i < size; i++) {
        printf("Nome: %s\n", vet[i].nome);
        printf("Altura: %.2f\n", vet[i].altura);
        printf("\n");
    }

}

void ordena (tipoPessoa vet[], unsigned size) {
    int i, j;
    tipoPessoa pivot;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    //ordenar a primeira metade do vetor por nome

    for (i = 1; i <= mid; i++) {
        pivot = vet[i];
        j = i - 1;

        while ((j >= 0) && (strcmp(vet[j].nome, pivot.nome) > 0)) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = pivot;
    }

    //ordena a segunda metade por altura

    for (i = mid + 1; i < size; i++) {
        pivot = vet[i];
        j = i - 1;

        while ((j >= 0) && (vet[j].altura > pivot.altura)) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = pivot;
    }
}

int main () {
    tipoPessoa vet[N];

    readVectorPeople(vet, N);
    printf("\n");
    printf("Vetor tipoPessoa: \n");
    
    ordena(vet, N);
    showVectorPeople(vet, N);

}