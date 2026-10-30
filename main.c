#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>



int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int vet[10];
    for(int i = 0; i < 10; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor: \n");
    for(int i = 0; i < 10; i++){
        printf("%d", vet[i]);
        printf("\n");
    }


    return 0;
    }



