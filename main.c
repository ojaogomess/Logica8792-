#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nomes[7][20] = {"João\n", "Ana\n", "Melissa\n", "Marcelo\n", "Deisi\n", "Meiriane\n", "Cleber\n"};

printf("%s", nomes[0]);
printf("%s", nomes[1]);
printf("%s", nomes[2]);
printf("%s", nomes[3]);
printf("%s", nomes[4]);
printf("%s", nomes[5]);
printf("%s", nomes[6]);


return 0;

}