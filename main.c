#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int contador = 0;

for(int a = 0; a <= 9; a++){
    for(int b = 0; b <= 9; b++){
        for(int c = 0; c <= 9; c++){
            for(int d = 0; d <= 9; d++){
                contador++;
                printf("OS possíveis resultados são: %d %d %d %d\n", a, b, c, d);
            }
        }
    }
}
printf("O número total de interações: %d\n", contador);


return 0;

}