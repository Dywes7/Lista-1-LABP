#include <stdio.h>

int main() {

    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    numero = (numero >= 0) * numero + (numero < 0) * (-numero);

    printf("O valor absoluto do número é: %d\n", numero);

}