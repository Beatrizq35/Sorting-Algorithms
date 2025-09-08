/*
Faça uma função que receba como parâmetro um inteiro N e
retorne a soma dos quadrados de todos os números inteiros
positivos de valor menor ou igual a N. Calcule iterativamente, sem
usar a fórmula para calcular o valor
*/

#include <stdio.h>

int somaQuadrados (int n) {
    int soma, i;

    soma = 0;

    if (n > 0) {
        for (i = 1; i <= n; i++) {
        soma  = soma + (i * i);
        }
    }
    return soma;
}

int main() {
    int n, result;

    printf("Digite um valor: ");
    scanf("%d%*c", &n);

    result = somaQuadrados(n);

    printf("A soma dos quadrados é: %d\n", result);

    return 0;

}