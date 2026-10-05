#include<stdio.h>
#include<windows.h>


char* retornarNOme(char nome[]){
   return nome;
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int voto;

printf("Digite um número para seguir a votação: ");
scanf("%d", &voto);

if(voto == 20){
   printf("Carla");
}else if(voto == 10){
   printf("Manoel");
}else if(voto == 30){
   printf("Bianca");
}else if(voto == 40){
   printf("Henrique");
}else if(voto == 50){
   printf("Bruno");
}
else{
   printf("Inválido");
}

return 0;

}