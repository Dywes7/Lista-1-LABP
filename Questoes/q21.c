#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    char *multiplo[] = {"n�o multiplo", "multiplo"};

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);


    printf("O n�mero %d � um n�mero %s de %d.", num1, multiplo[num2 % num1 == 0], num2);

}