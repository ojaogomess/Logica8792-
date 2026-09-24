#include<stdio.h>
#include<windows.h>

void linha(int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("Agua");
    }
}
int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


linha(2000);

    
return 0;

}