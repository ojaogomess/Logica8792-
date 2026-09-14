#include<stdio.h>
#include<windows.h>


int main () {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

printf("%s", n > 0 ? "Positivo" : (n < 0 ?"Negativo" : "Zero"));

    return 0;
}