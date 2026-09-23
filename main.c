#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
int horas[12];
int minutos[60];

char nomes[3][60] ={
    "João",
    "Ana",
    "Melissa"
};


int i;

for(i = 0; i <= 3; i++){
    printf("%s\n", nomes[i]);
}

return 0;
}