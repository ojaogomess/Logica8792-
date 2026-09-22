#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int idade[3] = {25, 35, 45};

printf("%s %d %s", "João tem:",idade[0], "anos!\n");
printf("%s %d %s", "Ana tem:",idade[1],"anos!\n");
printf("%s %d %s", "Marcelo tem",idade[2],"anos!");



return 0;
}