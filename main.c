#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;

};

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
struct pessoa p1 = {"Alexandre", 50, 1.83};
struct pessoa p2 = {"Marciano", 20, 1.90};

printf("Nome: %s - idade: %d - Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
printf("Nome: %s - idade: %d - Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
return 0;

}
