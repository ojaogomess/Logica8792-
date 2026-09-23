#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
int num[5] = {1, 2, 3, 4, 5};

int i;

for(i = 0; i < 5; i++){
    printf("%d", num[i]);
}

printf("%d Retornoooooo\n", i);

return 0;
}