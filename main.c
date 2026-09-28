#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


for(int i = 1; i < 8; i++){
    for(int j = 1; j < 8; j++){
        printf("For externo e for interno: %d %d\n", i, j);
    }
}






return 0;

}