#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int opcao = -1;

while(opcao != 0){ //!= significa diferente 
    printf("\nMenu: \n");
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Consultar\n");
    printf("0 - Sair\n");
    printf("\nDigite uma opção:\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: printf("Voce escolheu Depositar\n"); break;
        case 2: printf("Voce escolheu Sacar\n"); break;
        case 3: printf("Voce escolheu Consultar\n"); break;
        case 0: printf("Saindo...\n"); break;
        default: printf("Opção Inválida.\n");

    }

}

return 0;

}