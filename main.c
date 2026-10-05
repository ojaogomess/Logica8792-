#include<stdio.h>
#include<windows.h>


char* retornarNOme(char nome[]){
   return nome;
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

printf("O nome é: %s\n", retornarNOme("João"));


return 0;

}