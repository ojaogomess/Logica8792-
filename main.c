#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<string.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;
printf("Quantos nomes deseja digitar? ");
scanf("%d", &n);
char nomes [n][50];
for(int i = 0; i < n; i++){
    printf("Digite o nome %d: ", i + 1);
    scanf("%s", nomes[i]);
}




return 0;

}
