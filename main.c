#include<stdio.h>
#include<windows.h>

void verificarEhParImpar (int n){
    if(n % 2 == 0){
    printf("%d é par!\n", n);
}else{
    printf("%d é impar\n", n);
    }
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    verificarEhParImpar(numero);



    
return 0;

}