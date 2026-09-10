#include<stdio.h>
#include<windows.h>

int main () {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a = 5;
   int b = 4;

   printf("O maior número é: %d\n", (a + b));
    printf("Divisão de 5 por 4 é: %d\n", (a/b));
    printf("A multiplicação de 5 por 4 é: %d\n", (a * b));
    printf("A subtração é: %d\n", (a-b));



    return 0;
}