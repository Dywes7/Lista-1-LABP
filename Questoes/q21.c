#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    char *multiplo[] = {"não multiplo", "multiplo"};

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);


    printf("O número %d é um número %s de %d.", num1, multiplo[num2 % num1 == 0], num2);

}