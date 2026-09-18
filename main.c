#include<stdio.h>
#include<windows.h>

int main(){

int opcao;

printf("--- sistema de pedágio ---");
printf("1 - Moto");
printf("2 - Carro Passeio\n");
scanf("%d", &opcao);

switch (opcao)
{
  case 1:
  printf("Categoria: Moto | Tarifa: R$ 5,00\n");
  break;
  case 2:
  printf("categoria: Carro Passeio | Tarifa R$ 10,00\n");
  default:
  printf("Erro: Categoria não adestrada no sistema.\n");
  break;
}



return 0;

}