#include<stdio.h>
#include<windows.h>


int main () {

  int a, b, c, maior;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
 
    maior = a;
        
        if(b > maior) maior = b;
        if(c > maior) maior = c;
        
        printf("maior: %d", maior);
  
  

     return 0;
}