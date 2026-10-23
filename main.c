#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
 
int n;
printf("Digite um número de 1 a 12: ");
scanf("%d", &n);

switch (n){

case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("O mes %d tem 31 dias!\n", n);    
    break;
case 2:
    printf("O mes %d tem 28 dias!\n", n);
    break;
case 4:
case 6:
case 9:
case 11:
    printf("O mes %d tem 30 dias\n", n);
    break;
default:

    break;
}

   return 0;
}