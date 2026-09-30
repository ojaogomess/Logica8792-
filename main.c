#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n, contador = 0; //declara n e contador, iniciando contador com 0

printf("Digite o limite N: "); //pede para digitar limite N
scanf("%d", &n); //le e escaneia o valor do limite e armazena em n
for(int num = 2; num <= n; num++){ //para (introduz num) num menor que dois e enquanto num menor ou igual que n, num aumenta 1 a cada repetição
    int primo = 1; //assume inicialmente que o número é primo
    for(int i = 2; i < num; i++){ //começa i em 2 e testa todos os divisores até antes de num
        if(num % i == 0){ //se quando num divide por i não sobra resto
            primo = 0; //não é primo
            break; //interrompe o laço atual
        }
    }
    if(primo){ //se o número continuou marcado como primo, incrementa o contador
        contador++;

    }
}
printf("Quantidade de primos entre 1 e %d: %d\n", n, contador); //mostra a quantidade de números primos encontrados entre 1 e n


return 0;

}