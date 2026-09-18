#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int mes;

printf("Digite um valor (1-12)");
scanf("%d", &mes);

switch (mes)
{
case 12:
case 1:
case 2:
  printf("Verão");
  break;
case 3:
case 4:
case 5:
  printf("Outono");
  break;

case 6:
case 7:
case 8:
  printf("Inverno");
  break;

case 9:
case 10:
case 11:
  printf("Primavera");
  break;
  default:
  printf("Valor Inválido");
}


return 0;

}