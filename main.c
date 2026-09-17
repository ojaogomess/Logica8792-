#include<stdio.h>
#include<windows.h>


int main () {

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

   int nota;

  printf("Digite a nota");
  scanf("%d", &nota);

  if (nota >= 7){
    printf("Aprovado!");
  }else if(nota >= 5){
    printf("Recuperação!");
  }else{
    printf("Reprovado!");
  }


return 0;

}