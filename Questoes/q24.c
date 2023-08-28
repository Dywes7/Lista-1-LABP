#include <stdio.h>

int main() {

    int n, x, resultado;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    resultado = x << n;

    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, resultado);



}