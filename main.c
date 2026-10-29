#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>


char* tipoVeiculo(char placa[]){
    char primeiro = placa[0];
    if(primeiro >= 'A' && primeiro <= '2'){
        return "Veículo particular";
    }else if(primeiro >= '0' && primeiro <= '9'){
        return "Placa irregular";
    }else{
        return "Formato desconhecido";
    }
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;
    char placa[8];
    printf("\n--- SISTEMA DE TRANSITO BRASILEIRO ---\n");
    printf("Digite os caracteres da placa do veículo: \n");
    scanf("%s", placa);

    do{
        printf("\n 1 - Ver placa | 2 - Tipo de veículo | 0 - Sair: \n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1: 
            printf("Placa de veículo: %s\n", placa);
            break;

            case 2:
            printf("Tipo: %s\n", tipoVeiculo(placa));
            break;

            case 0:
            printf("Saindo...\n");
            break;

            default:
            printf("Número Inválido!\n");
            break;
        }
    }while(opcao != 0);

   


    return 0;
    }



