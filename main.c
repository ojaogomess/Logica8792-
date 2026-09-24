#include<stdio.h>
#include<windows.h>

void maxMin(int v[], int tamanho){
    int max = v[0], min = v[0];
    for(int i = 1; i < tamanho; i++){
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }
    printf("Máximo: %d, Mínimo: %d\n", max, min);

}
int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int numeros[5];

for(int i = 0; i < 5; i++){

printf("Digite o numero %d: ", i + 1);

scanf("%d", &numeros[i]);
}

maxMin(numeros, 5);






return 0;

}