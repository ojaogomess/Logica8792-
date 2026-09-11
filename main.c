#include<stdio.h>
#include<windows.h>


int main () {

  
  float valor, cotacao;

  printf("Digite o valor em reais: ");
  scanf("%f", &valor);
  printf("Digite a cotacao do dolar: ");
  scanf("%f", &cotacao);

  printf("Valor em dolares: %.2f\n", valor / cotacao);
 
   
    return 0;
}