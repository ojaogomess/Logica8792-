#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
int n;


printf("Digite o tamanho do quadrado(X x Y): ");
scanf("%d", &n);


for(int x = 1; x <= n; x++){
    for(int y = 1; y <= n; y++){
        printf("* ");
    }
    printf("\n");
}
return 0;

}