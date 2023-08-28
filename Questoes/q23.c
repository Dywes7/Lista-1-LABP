#include <stdio.h>

int main() {

int numero, unidade, dezena, centena;

do {
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);
} while (numero < 100 || numero > 999);

centena = numero / 100;

dezena = (numero - centena * 100) / 10;

unidade = numero - (centena * 100) - (dezena * 10);

printf("Número impresso na ordem inversa: %d%d%d\n", unidade, dezena, centena);

}