#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    char *paridade[] = {"par", "ímpar"};

    printf("O número %d é %s.\n", numero, paridade[numero % 2]);

}
