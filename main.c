#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main () {

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

  setlocale(LC_ALL, "pt_BR.UTF-8");

  float n1, n2, n3, media;

  printf("Digite a nota 1: ");
  scanf("%f", &n1);

   printf("Digite a nota 2: ");
  scanf("%f", &n2);

 printf("Digite a nota 3: ");
  scanf("%f", &n3);

media = (n1 + n2 + n3) / 3;

if(media >= 7){
  printf("Aprovado");
}else if(media >= 5){
  printf("Recuperação");
}else{
  printf("Reprovado");
}

return 0;

}