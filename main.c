#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

const int MAX_TENTAIVAS = 7;
int tentativas[MAX_TENTAIVAS];
int secreto, palpite;

int usadas = 0, acertou = 0;

srand(time(NULL));
secreto = rand() % 100 + 1;
printf("Advinhe o número entre 1 e 100: \n");
printf("Você tem %d tentativas \n", MAX_TENTAIVAS);

do{
    printf("\nTentativa %d: ", usadas + 1);
    scanf("%d", &palpite);
        if(palpite < 1 || palpite > 100){
            printf("Digite um número entre 1 a 100!");
        }else{
        tentativas[usadas] = palpite;
        usadas++;
        if(palpite == secreto){
            acertou = 1;
          
        }else if(palpite < secreto){
            printf("O número secreto é MAIOR!\n");
        }else{
            printf("O número secreto é MENOR!\n");
        }
        }
}while(!acertou && usadas < MAX_TENTAIVAS);
printf("\n--- FIM DO JOGO ---\n");
if(acertou){
    printf("Parabéns. Você acertou o número secreto em %d tentativas(s)\n", usadas);
}else{
    printf("Suas tentativas acabaram. O número era %d. \n", secreto);
}
 printf("Histórico de palpites: \n");
 for(int i = 0; i < usadas; i++){
    printf("%d) %d\n", i + 1, tentativas[i]);
 }

    return 0;
}