#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;
long long fatorial = 1;

printf("Digite um número: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    fatorial *= i;
}
printf("Fatorial: %lld\n ", fatorial);

return 0;

}