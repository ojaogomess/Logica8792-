#include<stdio.h>
#include<windows.h>

int main () {

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

 float a, b, c;

 printf("Digite os três lados do triangulo: ");
scanf("%f %f %f", &a, &b, &c);

if(a == b && b == c){
  printf("Equilátero");
}else if(a == b || a == c || c){
  printf("Isóceles");
}else{
  printf("Escaleno\n");
}




return 0;

}