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

printf("Qual seu nome?\n");
scanf("%s", &p1.nome);

printf("Sua idade?\n");
scanf("%d", &p1.idade);

printf("Sua altura?\n");
scanf("%f", &p1.altura);

printf("E seu peso?\n");
scanf("%f", &p1.peso);

printf("Nome: %s | idade: %d | altura: %f | peso: %f", p1.nome, p1.idade, p1.altura, p1.peso);



SetConsoleCP(65001);
SetConsoleOutputCP(65001);

return 0;

}
