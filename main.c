#include<stdio.h>
#include<windows.h>


int main () {

  int a, b, c, d, e, menor;

    printf("Digite um numero para a: ");
    scanf("%d", &a);

    printf("digite um numero para b: ");
    scanf("%d", &b);
    
    printf("digite um numero para c: ");
    scanf("%d", &c);

    printf("Digite um numero para d: ");
    scanf("%d", &d);

    printf("Digite um numero para e: ");
    scanf("%d", &e);
   
   
    menor = a;
        
        if(b < menor) menor = b;
        if(c < menor) menor = c;
        if(d < menor) menor = d;
        if(e < menor) menor = e;
        
        printf("menor: %d", menor);
  
  

     return 0;
}