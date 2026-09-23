#include<stdio.h>
#include<windows.h>


void tabuada(int n){
    printf("Tabuada do %d\n", n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    fibonacci(10);
    
tabuada(5);

return 0;

}