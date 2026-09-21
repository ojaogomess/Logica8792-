#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nomes[3][20] = {"João\n", "Ana\n", "Melissa\n"};

printf("%s", nomes[0]);
printf("%s", nomes[1]);
printf("%s", nomes[2]);



return 0;

}