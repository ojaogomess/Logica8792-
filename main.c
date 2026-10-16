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

int n;
printf("Quantas pessoas deseja cadastrar?: ");
scanf("%d", &n);

getchar(); //consome o \n (quebra de linha) deixado pelo scanf
struct Pessoa p1[n];

for(int i = 0; i < n; i++){
    printf("\nPessoa %d\n ", i + 1); //guarda o numero pro 1 porque comeca em 0
    printf("Nome completo: ");
    fgets(p1[i].nome, sizeof(p1[i].nome), stdin);
    
    printf("Idade: ");
    scanf("%d", &p1[i].idade);
    printf("Altura: ");
    scanf("%f", &p1[i].altura);
    printf("Peso: ");
    scanf("%f", &p1[i].peso);
   
    getchar();
}
printf("\nLista:\n");

for(int i = 0; i < n; i++){
    printf("\nNome: %s | idade: %d | altura: %f | peso: %f", p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
}



return 0;

}
