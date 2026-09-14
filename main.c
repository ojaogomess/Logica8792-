#include<stdio.h>
#include<windows.h>


int main () {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

printf("%s", n % 2 == 0 ? "\nPar" : "\nimpar");

    return 0;
}