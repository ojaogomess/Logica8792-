#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    printf("Digite o tamanho do vetor: "); 
    scanf("%d", &n);

    int v[n]; //declara vetor inteiro com armazenamento a depender do valor do n que o usuario digitar
    int soma = 0; //soma começa em 0
    for(int i = 0; i < n; i++){ //declara i em 0, enquanto i menor que o valor que o usuario selecionar paara o vetor (n), i soma 1 em cada volta 
        printf("Digite o valor %d: ", i + 1);  //pede ao usuário um valor para armazenar na posição atual do vetor
        scanf("%d", &v[i]); //escaneia o vetor com o armazenamento que o i determinou (valores que o usuario colocou em cada "gaveta")
        soma += v[i]; //soma igual a soma mais v e i (numeros selecionados no vetor)
    }
    printf("Soma: %d\n", soma); // soma resultante 
    printf("Média: %.2f\n", (float)soma/n); //média entre todos os valores do vetor





return 0;

}