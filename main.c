#include<stdio.h>
#include<windows.h>



int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

   printf("Digite o tamanho do vetor: ");
   scanf("%d", &n);

int v[n]; //vetor é da familia dog array, porém unidimensional (uma linha/dimensional);
   for(int i = 0; i < n; i++){ //cria i começando em 0, repete enquanto i for menor que n, e aumenta 1 a cada repetição
      printf("Digite o valor %d: ", i + 1); //mostra pra digitar o valor e em seguida i soma um para que se possa armazenar em diferentes valores do vetor
      scanf("%d", &v[i]); // escaneia o valor que o usuario inseriu o guarda e o guarda em v[i]
   }

   int maior = v[0], menor = v[0]; //declara maior e menor com valor em v com 0 "gavetas iniciais"
   for(int i = 1; i < n; i++){ //para (delcara i, enquanto i menor que n (valor que usuario digitar), i soma 1 a cada volta)
      if(v[i] > maior) maior = v[i]; // se vetor com i gavetas é maior que "maior", então maior é o vetor em i 
      if(v[i] < menor) menor = v[i]; ///mesma coisa mas com menor

   }
   printf("Maior: %d\n", maior);
   printf("Menor: %d\n", menor);

return 0;

}