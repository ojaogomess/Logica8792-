#include<stdio.h>
#include<windows.h>


int main () {

  int idade;

  printf("Digite uma idade: ");
  scanf("%d", &idade);

  if(idade >= 18){
    printf("voce e maior de idade");
  }else{
    printf("voce e menor de idade");
  }

    return 0;
}