#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numerosInteiros[5] = {1, 5, 10, 15, 20};
float numerosFloats[5] = {10.5, 20.8, 30.2, 40.9, 50.1}; 
char carros[3][20] = {"Ferrari", "Mercedez", "Volkswagen"};

printf("\n");

printf("%s\n", carros[0]);
printf("%s\n", carros[1]);
printf("%s\n", carros[2]);

printf("\n------------------\n");

printf("\n%.1f\n", numerosFloats[0]);
printf("%.1f\n", numerosFloats[1]);
printf("%.1f\n", numerosFloats[2]);
printf("%.1f\n", numerosFloats[3]);
printf("%.1f\n", numerosFloats[4]);

printf("\n-------------------\n");

printf("\n%d\n%d\n%d\n%d\n%d\n", numerosInteiros[0], numerosInteiros[1], numerosInteiros[2], numerosInteiros[3], numerosInteiros[4]);



return 0;
}