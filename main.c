#include<stdio.h>
#include<windows.h>


int main () {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

if(n % 2 == 0){
    printf("\npar");
}else{
    printf("\nímpar");
}

    return 0;
}