#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int DIAS = 7;
    float temp[DIAS];
    float soma = 0, media;
    float maior, menor;
    int diaMaior = 1, diaMenor = 1;
    int acimaMedia = 0;

    // Entrada das temperaturas
    for (int i = 0; i < DIAS; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma += temp[i];

        // Inicializa maior e menor com o primeiro valor
        if (i == 0) {
            maior = menor = temp[i];
        }

        if (temp[i] > maior) {
            maior = temp[i];
            diaMaior = i + 1;
        }

        if (temp[i] < menor) {
            menor = temp[i];
            diaMenor = i + 1;
        }
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; i++) {
        if (temp[i] > media) {
            acimaMedia++;
        }
    }

    printf("\n--- TEMPERATURAS ---\n");

    for (int i = 0; i < DIAS; i++) {
        printf("Dia %d: %.1f°C\n", i + 1, temp[i]);
    }

    printf("\nMedia da semana: %.1f°C\n", media);
    printf("Maior temperatura: %.1f°C (dia %d)\n", maior, diaMaior);
    printf("Menor temperatura: %.1f°C (dia %d)\n", menor, diaMenor);
    printf("Dias acima da media: %d\n", acimaMedia);

    return 0;
}