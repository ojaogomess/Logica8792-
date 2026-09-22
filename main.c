#include<stdio.h>
#include<windows.h>

void saudar(){ //nao tem parametro ()
    printf("Olá Mundo!\n");
    printf("Tudo bem?\n");
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

saudar();


return 0;
}