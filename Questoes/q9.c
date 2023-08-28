#include <stdio.h>

int main() {

    int valor;

    puts("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("O seu antecessor é: %d\n", valor - 1);

    printf("O seu sucessor é: %d", valor + 1);

}