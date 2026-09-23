#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nome[50];

printf("Digite seu nome completo aqui: ");
fgets(nome, sizeof(nome), stdin);

printf("Olá %s", nome);




return 0;
}