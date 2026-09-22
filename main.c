#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);




for(float i = 100; i >= 1; i = i / 2){
  printf("%.5f\n", i);
}


return 0;
}