#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char letra;
printf("Digite uma letra: ");
scanf("%c", &letra);

if (letra == 'a' || letra == 'e' || letra == 'o' || letra == 'u' ||
letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
  printf("Vogal\n");
}else{
  printf("Consoante\n");
}

return 0;

}