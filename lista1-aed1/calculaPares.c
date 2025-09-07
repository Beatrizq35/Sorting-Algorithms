/*
Faça uma função que calcule e retorne o produto dos n
primeiros números pares positivos, onde n deve ser passado como
parâmetro. A função deve calcular os valores de forma iterativa.
Não use uma fórmula pronta! Ex.: para n=4, a função deve retornar
8*6*4*2=384, fazendo as operações de multiplicação mostradas.
Se n não for positivo, a função deve retornar 1.
*/
#include <stdio.h>
int calculaPares(int n) {
    int i, par, result;
    par = 2;
    
    if (n >= 0) {
        result = 1;
        for (i = 0; i < n; i++) {
            result *= par;
            par += 2;  
        } 
    } else {
        result = 1;
    }
    return result;
}

int main() {
    int n, result; 

    printf("Digite um valor: ");
    scanf("%d", &n);

    result = calculaPares(n);

    printf("Resultado: %d\n", result);
    
    return 0;
}
