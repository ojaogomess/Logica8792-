#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
int horas[12];
int minutos[60];

for(int i = 0; i < 12; i++){
    horas[1] = i + 1;
}

for(int j = 0; j < 60; j++){
    minutos[j] = j;
}

for(int i = 0; i < 12; i++){
    for(int j = 0; j < 60; j++){
        printf("Hora: %2d:%02d\n", horas [1], minutos[j]);
    }
}
return 0;
}