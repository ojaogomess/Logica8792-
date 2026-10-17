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

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n, soma;

printf("digite N: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    soma += i;
    soma -= 1;
    printf("O resultado %d + %d = %d\n", soma, i, soma + i);
}
return 0;

}
