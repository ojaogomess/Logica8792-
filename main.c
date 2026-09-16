#include<stdio.h>
#include<windows.h>


int main () {

 int idade;
 float altura;

printf("Bem-vindos ao brinquedo roleta da morte!");
printf("\nQual sua idade? ");
scanf("%d", &idade);
printf("\nQual sua altura?");
scanf("%f", &altura);

if((idade >= 18) && (altura >= 1.60)){
printf("Voce pode brincar na roleta!");
}else{
  printf("Voce não pode brincar na roleta");
}

return 0;

}