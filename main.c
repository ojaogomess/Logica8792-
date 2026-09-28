#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n, resultado;

printf("Digite um número: ");
scanf("%d", &n);

for(int i = 1; i <= 10; i++){
        for( int j = 1; j <= 10; j++){
            printf("\n%d x %d = %d\n", i, j, i * j);
        }
    }







return 0;

}