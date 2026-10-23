#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
 
int n;
printf("Digite um número de 1 a 3: ");
scanf("%d", &n);

switch (n){

case 1:
    printf("%d\n", n);
    break;
case 2:
    printf("%d\n", n);
    break;
case 3:
    printf("%d\n", n);
    break;
default:
printf("Opção inválida");
    break;
}

   return 0;
}