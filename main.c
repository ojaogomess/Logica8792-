#include<stdio.h>
#include<windows.h>


int main () {

    int segundos, minutos, horas, resto;

    printf("Digite a quantidade em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    resto = segundos % 60;

    printf("%d horas, %d minutos e %d segundos\n,", horas, minutos, resto);

    return 0;
}