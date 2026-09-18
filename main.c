#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;

printf("--- sistema de pedágio ---\n");
printf("1 --- Moto ---\n");
printf("2 --- Carro Passeio ---\n");
printf("3 --- Caminhão ---\n");
printf("4 --- Onibus ---\n");
scanf("%d", &opcao);

switch (opcao)
{
  case 1:
  printf("Categoria: Moto | Tarifa: R$ 5,00\n");
  break;
  case 2:
  printf("categoria: Carro Passeio | Tarifa R$ 10,00\n");
  break;
  case 3:
  printf("Categoria: Caminhão | Tarifa: R$25,00\n");
  break;
  case 4:
  printf("Categoria Onibus | Tarifa R$30,00\n");
  break;
  default:
  printf("Erro: Categoria não adestrada no sistema.\n");
  break;
}



return 0;

}