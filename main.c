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
case 1:
printf("Janeiro - Verão \n");
  break;
  case 2:
  printf("Fevereiro - Verão \n");
  break;
  case 3:
  printf("Março - Verão/Outono \n");
  break;
  case 4:
  printf("Abril - Outono\n");
  break;
  case 5:
  printf("Maio - Outono \n");
  break;
  case 6:
  printf("Junho - Outono/Inverno  \n");
  break;
  case 7:
  printf("Julho - Inverno \n");
  break;
  case 8:
  printf("Agosto - Inverno \n");
  break;
  case 9:
  printf("Setembro - Inverno/Primavera \n");
  break;
  case 10:
  printf("Outubro - Primavera \n");
  break;
  case 11:
  printf("Novembro - Primavera \n");
  break;
  case 12:
  printf("Dezembro - Primavera/Verão\n");
  break;
  default:
  printf("Valor não permitido.\n");
  break;
}


return 0;

}