#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>

    struct Pessoa{
        char nome[50];
        int idade;
        float altura;
        float peso;
    };


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n; //declara n
printf("Digite o tamanho do vetor"); //mostra no terminal essa mensagem
scanf("%d", &n); //o usuario insere um valor e o mesmo é armazenado em n

int v[n]; //declara vetor com tamanho do valor que o usuario colcou em n

    for(int i = 0; i < n; i++){ //para (decalara i começando em 0), enquanto i menor que o valor n, i acrescenta a cada repetição
        printf("Digite o valor %d: ", i + 1); //digite o valor (os valores variam conforme o usuario capacitou o armazenamento do vetor) e soma um em i porque i começa em 0 
        scanf("%d", &v[i]); // le o valor que o usuario colocou e o armazena no vetor v com tamanho i
    }

    for(int i = 0; i < n - 1; i++){ //para (declara i começando em 0, enquanto i menor que n subtraido por um (não sei porque), i acrescenta a cada repetição)
        for(int j = 0; j < n - i - 1; j++){ //enquanto j (declarado começando em 0) menor que n subtraido por i, subtraido por um, acrescenta j a cada repetição
            if(v[j] > v[j + 1]){ //se vetor v com tamanho j é maior que vetor com tamanho j somado a 1 >>
                int temp = v[j]; //declara temp como vetor com tamanho j
                v[j] = v[j + 1]; //vetor em tamanho j igual vetor em tamanho j somado a um
                v[j + 1] = temp; //vetor com tamanho de v somado a um é igual a temp
                
            }
        }

    }
printf(" Valor ordenado: \n"); //mostra os valores ordenados >>
for(int i = 0; i < n; i++){
    printf("%d", v[i]);
}


return 0;

}
