#include <stdio.h>

int main() {

    int tempo, horas, minutos, segundos;

    printf("Digite um tempo em segundos: ");
    scanf("%d", &tempo);

    minutos = tempo / 60;

    horas = minutos / 60;

    minutos = minutos - (horas * 60);

    segundos = tempo - (minutos * 60) - (horas * 3600);

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    
}
