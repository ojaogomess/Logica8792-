#include<stdio.h>
#include<windows.h>


char* saudacao(){
   return "Olá, seja bem vindo(a)!";
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

printf("%s\n", saudacao());


return 0;

}