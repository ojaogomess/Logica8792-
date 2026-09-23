#include<stdio.h>
#include<windows.h>


int fatorial(int n){
    int resultado = 1;
    for(int i = 1; i <= n; i++){
    resultado *= i;//resultado = resultado *i
}
    return resultado;


}   



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Fatorial de %d é %d\n", numero, fatorial(numero));


return 0;

}