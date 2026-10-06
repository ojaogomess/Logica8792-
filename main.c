#include<stdio.h>
#include<windows.h>

int votosA = 0, votosB = 0, votosNulos = 0; //delcara votos nulos, a e b inicialmente como 0


void votar(int numero){ //função de votar (declara numero inteiro)
   if(numero == 1){   //se 
      votosA++;
      printf("Você votou no canditado A.\n");
   }else if (numero == 2){
      votosB++;
      printf("Você votou no canditado B");
   }else{
   votosNulos++;
   printf("Voto nulo.\n");
   }
}

void resultado(){
   printf("\n===== Resultado da Votação =====\n");
   printf("Canditado A: %d votos\n", votosA);
   printf("Canditato B: %d votos\n", votosB);
   printf("Nulos: %d votos\n", votosNulos);

   if(votosA > votosB){
      printf("Vencedor da votação: Canditado A!");
   }else if(votosA < votosB){
      printf("Vencedor da votação: Canditado B!");
   }else{
      printf("Empate!");
   }

}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int voto;
int totalEleitores = 10;

for(int i = 0; i < totalEleitores; i++ ){
   printf("Eleitor %d - Digite 1 para A, 2 para B: ", i + 1);
   scanf("%d", &voto);
   votar(voto);
}

resultado();

return 0;

}