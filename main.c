#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n = 8; //declara n com valor em 8

    for(int i = 0; i < n; i++){ //para (declara i em 0), enquanto i menor que n, a cada repetição, i adiciona um
        for(int j = 0; j < n; j++){ //e para (declara j em 0) enquanto j menor que n, j adiciona 1 a cada volta
            if((i + j) % 2 == 0){ //se a soma de i e j for divisível por 2 e não sobrar restp
                printf("[ ]"); //mostre []
            }else{ // senao, mostre [#]
                printf("[#]");
            }
        }
        printf("\n"); //quebra a linha após terminar uma linha inteira da matriz
    }

return 0;

}