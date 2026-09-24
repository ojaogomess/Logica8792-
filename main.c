#include<stdio.h>
#include<windows.h>

void contarVogais (char palavra[]){
    int contador = 0;
    for(int i = 0; i <strlen(palavra); i++){
        char c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            contador++;
        }//strlen calcula os caracteres de uma palavra
    }
    printf("A palavra '%s', tem %d vogais \n", palavra, contador);
}
int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

char palavra[20];

printf("Digite uma palavra: ");
scanf("%s", &palavra);

contarVogais(palavra);
    
return 0;

}