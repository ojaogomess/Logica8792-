#include<stdio.h>
#include<windows.h>


int main () {

  int idade;

  printf("Digite uma idade: ");
  scanf("%d", &idade);

  if(idade >= 50){
    printf("Voce e um senior");
  }else if (idade >= 18){
    printf("voce e maior de idade");
    }else if (idade >= 12){
        printf("voce e um adolescente");
    }else if (idade >= 9){
        printf("voce e um pre adolscente");
    }else{
        printf("voce e uma crianca");
    }
 
  
  

     return 0;
}