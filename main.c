#include<stdio.h>
#include<windows.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;
float nota, soma = 0;

printf("Quantos alunos tema  turma?: ");
scanf("%d", &n);

for(int i = 0; i < n; i++){ //enquanto i menor que n (tamanho da turma), continue adicionando i
    printf("Digite a nota do aluno %d: \n", i + 1); //digite a nota pertencente a cada aluno, a cada novo aluno para adicionar nota, adicione +1, para demonstrar aluno 1, 2, 3. 4...
    scanf("%f", &nota); //escaneia a nota e a guarda na váriavel nota
    soma += nota; // soma mais a nota e guarda valor
}
printf("Média da turma: %.2f\n", soma / n); //após finalizar as notas com o tamanho da turma (n), mostrea média com float de duas casas decimais e soma dividido por tamanho da turma



return 0;

}