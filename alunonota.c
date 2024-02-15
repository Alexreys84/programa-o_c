#include <stdio.h>

int main() {
    float nota1; 
    float nota2; 
    float nota3; 
    float nota4;
    float media; 
    //Solicitar a nota do aluno
        printf("Digite a nota 1: \n");
    scanf("%f",&nota1);

    printf("Digite a nota 2: \n");
    scanf("%f",&nota2);

    printf("Digite a nota 3: \n");
    scanf("%f",&nota3);

    printf("Digite a nota 4: \n");
    scanf("%f",&nota4),

    // Média de Cauculo
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Nota final
    printf("A media do aluno é: %.2f: \n", media);

    return 0;
}