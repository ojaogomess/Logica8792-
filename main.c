#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n, primo = 1;

printf("Digite um número: "); //pede um numero ao usuario
scanf("%d", &n); //usuario digita e numero evalor é armazenado na variavel n

if (n < 2) // se n é menor que 2..
    primo = 0; //ele não é primo (0 = condição falsa)
else //(senão)
    for(int i = 2; i < n; i++){ //para (introduz i), i = 2 e i menor que o valor de m (numero que usuario digitou, adiciona i de novo)
        if(n % i == 0) // se n dividido por i igual a 0 sem resto
        primo = 0; //não é primo
        break; //para a ação
    }
if(primo) //se é primo: mostra "é primo" ao usuario e com o valor que ele digitou
    printf("%d é primo\n", n);
else //senão
    printf("%d não é primo", n); //se não for primo, n é mostrado com "Não é primo"









return 0;

}