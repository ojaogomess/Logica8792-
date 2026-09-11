#include<stdio.h>
#include<windows.h>


int main () {

  
  int idade;

  printf("Digite a idade: ");
  scanf("%d", &idade);


  printf("\n%d anos equivalem a:\n", idade);
  printf("Equivale a %d meses \n", idade * 12);
  printf("Equivale a aproximadamente %d dias \n", idade * 365);
   
   
    return 0;
}