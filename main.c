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
    printf("%d\n", i);
}

printf("\n");

printf("Soma: \n");
for(int i = 0; i <= n; i++){
    printf("Soma de n: %d + %d = %d\n", n, i, n + i);
}
return 0;

}
