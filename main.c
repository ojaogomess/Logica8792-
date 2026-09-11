#include<stdio.h>
#include<windows.h>


int main () {

   int n;

   printf("Digite um numero");
   scanf("%d", &n);

    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);

    
    return 0;
}