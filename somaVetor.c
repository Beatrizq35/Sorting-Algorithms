#include <stdio.h>

void vectorSum(int vet[], unsigned size) {
    int i, soma, cont;
    int vetTemp[size];

    vetTemp[0] = vet[0];

    for (i = 0; i < size; i++) {
        soma = vet[i];
        cont = 0;
        
        while (cont < i) {
            soma = soma + vet[cont];
            cont++;
        }
        vetTemp[i] = soma;
    }

    for (i = 1; i < size; i++) {
        vet[i] = vetTemp[i];
    }
}

void showVector(int vet[], int size) {
	unsigned i;

	for (i = 0; i < size; i++) {
		printf("%u ", vet[i]);
	} printf("\n"); }

int main () {
	int sizeVet, i;

	printf("Tamanho do vetor: ");
	scanf("%d%*c", &sizeVet); 

	int vet[sizeVet];

	for (i = 0; i < sizeVet; i++) {
		scanf("%d", &vet[i]);
	}

	vectorSum(vet, sizeVet);
	showVector(vet, sizeVet);	
}