#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n, resto, invertido = 0;

printf("Digite um número: ");
scanf("%d", &n);

int ultimo;

while(n != 0){
    resto = n % 10;
    invertido = invertido * 10 + resto;
    n /= 10;
}
       printf("Numero invertido: %d\n", invertido);



return 0;

}