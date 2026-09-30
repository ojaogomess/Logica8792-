#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, limite; //declara n e limite
    printf("Digite o limite: "); //pede pro usuario digitar limite
    scanf("%d", &limite);  //digitado o valor para limite, sistema escaneia e guarada valor na variavel limite

for(int n = 1; n <= limite; n++){ //para (declara n em um), enquanto n menor ou igual a limite, adicione 1 a cada repetição de n
    int soma = 0; //declara soma como 0 (falso ou só valor 0 mesmo?)
    for(int i = 1; i < n; i++){ //para (declara i em um) i menor que n, i adiciona um a cada volta
        if(n % i == 0){ //SE divisão com n e i não sobrar resto
            soma += i; //soma (igual e armazena?) a i
        }
    }
    if (soma == n & n != 0){ //se soma igual a n e n diferente de 0...
        printf("%d é um número perfeito\n", n); //mostre (n) é um numero perfeito

    }
}

return 0;

}