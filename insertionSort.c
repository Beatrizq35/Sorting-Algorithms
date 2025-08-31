#include <stdio.h>

void insertionSort(int vet[], int size) {
	int key;
	int i, j;   //j é a parte ordenada.  i é a parte nao ordenada.  6, 3, 5, 1, 2 

	for (i = 1; i < size; i++) {
		key = vet[i];
		j = i - 1;

		while ((j >= 0) && (key < vet[j])) {
				vet[j + 1] = vet[j];
				j--;
		}
		vet[j + 1] = key;
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

	insertionSort(vet, sizeVet);
	showVector(vet, sizeVet);
	
}
