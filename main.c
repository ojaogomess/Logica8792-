#include<stdio.h>
#include<windows.h>
#include<stdbool.h>

    bool ehPar(int numero){
        return(numero % 2 == 0);
    }

int main () {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    bool resultado1 = ehPar(4);
    bool resultado2 = ehPar(7);
    bool resultado3 = ehPar(20);
    bool resultado4 = ehPar(144);
    bool resultado5 = ehPar(200);
    
    printf("4 é par? %d\n", resultado1);
    printf("7 é par? %d\n", resultado2);
    printf("20 é par? %d\n", resultado3);
    printf("144 é par? %d\n", resultado4);
    printf("200 é par? %d\n", resultado5);


    return 0;
}