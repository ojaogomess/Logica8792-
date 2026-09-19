#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


float peso, altura, imc;

printf("Digite a altura (m): ");
scanf("%f", &altura);

printf("Digite o peso (kg): ");
scanf("%f", &peso);

imc = peso / (altura * altura);

if(imc < 18.5){
  printf("Classificação: Abaixo do peso\n");
}else if(imc < 25){
  printf("Classificação: Peso normal!\n");
}else if(imc < 30){
  printf("Classificação: Acima do peso");
}else{
  printf("Classificação: Obesidade");
}


return 0;

}