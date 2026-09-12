#include<stdio.h>
#include<windows.h>


int main () {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  //if (.....){
    //     code..
    //}

    if(n > 0){
        printf("Positivo\n");
    }else{
        printf("Negativo\n");

    }
    

    return 0;
}