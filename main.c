#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

void linha(int n){
    for(int i = 0; i < n; i++){
        printf("-");
        printf("\n");
    }

}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

linha(10);
printf("Bem vindo ao sistema\n");
linha(10);



    return 0;
    }



