#include <stdio.h>


void selectionSort(int vet[], int size) {
  int i, j, posMenor, aux;

  for (i = 0; i < size - 1; i++) {
    posMenor = i;
    for (j = i + 1; j < size; j++) {
      if (vet[j] < vet[posMenor]) {
        posMenor = j;
      }
    }
    aux = vet[posMenor];
    vet[posMenor] = vet[i];
    vet[i] = aux;
  }
}

void showVet(int vet[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
}

int main() {
  int size, i;

  printf("Tamanho do vetor: ");
  scanf("%d", &size);

  int vet[size];

  for (i = 0; i < size; i++) {
    scanf("%d", &vet[i]);
  }

  selectionSort(vet, size);
  showVet(vet, size);

}
