#include <stdio.h>

int main() {

    float altura, peso_ideal;
    char sexo;

    puts("Informe sua altura em metros: ");
    scanf("%f", &altura);

    puts("Informe o sexo (M/F): ");
    scanf(" %c", &sexo);

    if ( sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
    } else {
        peso_ideal = 62.1 * altura - 44.7;
    }
    
    printf("O seu peso ideal é: %2.fKg", peso_ideal);


}