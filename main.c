#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char frutas[3][20] = {"Maçã\n", "Banana\n", "Laranja\n"};

printf("%s", frutas[0]);
printf("%s", frutas[1]);
printf("%s", frutas[2]);



return 0;

}