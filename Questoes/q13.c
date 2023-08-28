#include <stdio.h>

int main() {

    int valor1, valor2, segura_valor;

    puts("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    puts("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("ANTES DA TROCA: A=%d e B=%d\n", valor1, valor2);

    segura_valor = valor1;

    valor1 = valor2;

    valor2 = segura_valor;

    printf("DEPOIS DA TROCA: A=%d e B=%d", valor1, valor2);

    
}