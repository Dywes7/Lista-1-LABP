#include <stdio.h>

int main() {

    int celsius, fahrenheit;

    puts("Digite a temperatura em graus Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("A temperatura em Fahrenheit é: %d", fahrenheit);
}