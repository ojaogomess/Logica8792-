#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int i;

while(i <= 50){
    if(i % 2 == 1){
        printf("%d\n", i);
    }
    i++;
}


return 0;

}