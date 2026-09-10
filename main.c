#include<stdio.h>
#include<windows.h>

int main () {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int a = 5;
   int b = 4;

   printf("O maior numero e: %d\n", (a + b));
    printf("Divisao de 5 por 4 é: %d\n", (a/b));
    printf("A multiplicacao de 5 por 4 e: %d\n", (a * b));
    printf("A subtracao e: %d\n", (a-b));



    return 0;
}