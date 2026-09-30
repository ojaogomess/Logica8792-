#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10]; //declaramos v com "10 gavetas"
    for(int i = 0; i < 10; i++){ //para (declara i em 0) enquanto i menor 10, i soma um a cada volta
         printf("Digite o valor %d: ", i + 1); //pede o valor e e repete até chegar na ultima gaveta
        scanf("%d", &v[i]); //escaneia tudo e guarda esses valores em v 
    }
printf("Vetor invertido: \n"); //sai do for e mostra o valor invertido da ordem
for(int i = 9; i >= 0; i--){ //para (declara i em 9 por que é decrescente) enquanto i maior ou igual que 0, i ssubtrai um a cada volta
    printf("%d", v[i]); //mostra os valores do vetor começando pela última posição e indo até a primeira
}
printf("\n"); //quebra linha 


return 0;

}