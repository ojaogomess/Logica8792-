#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    struct Pessoa{
        char nome[50];
        int idade;
        float altura;
        float peso;
    };


int main(){

printf("--Bem vindo a academia!--");
printf("\n");


struct Pessoa p1;

printf("Digite o nome completo");
fgets(p1.nome, sizeof(p1.nome), stdin);

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

return 0;

}
