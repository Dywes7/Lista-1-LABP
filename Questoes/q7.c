#include <stdio.h>

int main() {

int horas, minutos, segundos, total_segundos;

puts("Digite a quantidade de horas: ");
scanf("%d", &horas);

puts("Digite a quantidade de minutos: ");
scanf("%d", &minutos);

puts("Digite a quantidade de segundos: ");
scanf("%d", &segundos);

total_segundos = (horas * 60 * 60) + (minutos * 60) + segundos;

printf("O total de segundos é: %d", total_segundos);


}