#include<stdio.h>
#include<windows.h>


int main () {

    float raio;
    const float PI = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    printf("Area: %.2f\n", PI * raio * raio);
    printf("Perimetro: %.2f\n", 2 * PI * raio);

   
    return 0;
}