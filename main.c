#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>


void somar(int a, int b){
    printf("Soma = %d\n", a + b);
}

int soma(int x, int y){
    return x + y;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    
int resultado = soma(100, 100);

    printf("O resultado da soma é: %d\n", resultado);
    


    
    return 0;
    }



