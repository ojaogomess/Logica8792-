#include<stdio.h>
#include<windows.h>


void saudação(){
   printf("Seja bem vindo!");
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

saudação();

return 0;

}