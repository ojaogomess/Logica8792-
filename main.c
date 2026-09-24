#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    while(numero <= 0){
        printf("Numero inválido! Digite novamente: ");
        scanf("%d", &numero);
    }
    printf("Número Váido: %d\n", numero);
return 0;

}