#include<stdio.h>
#include<windows.h>

void saudar(const char *nome){ //nao tem parametro ()
    printf("Olá %s\n", nome);
    
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

saudar("João Vitor");
saudar("Ana");


return 0;
}