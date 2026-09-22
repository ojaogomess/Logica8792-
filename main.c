#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numeros[3] = {1, 2, 3};

printf("%zu", sizeof(numeros));



return 0;
}