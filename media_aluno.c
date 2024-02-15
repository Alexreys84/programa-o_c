/*
Neste Programa iremos calcular a nota média do aluno.
Teremos a entrada de 4 notas, depos sera feito o 
Cauculo da média, onde iremos somar as notas e depois dividir por 4.
Se o aluno tiver média acima ou igual a 7, então estará aprovado; caso o aluno de tenha
uma nota menor ou igual a 4, então o aluno estará reprovado; caso o contrario, estara em recuperação.
*/
#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    printf("Digite a Primeira nota: \n");
    scanf("%f",&nota1);

    printf("Digite a Segunda nota: \n");
    scanf("%f",&nota2);
   
    printf("Digite a Terceira nota: \n");
    scanf("%f",&nota3);

    printf("Digite a Quarta nota: \n");
    scanf("%f",&nota4);
    
     media = (nota1+nota2+nota3+nota4) / 4;
   
    printf("A nota média do aluno é %2.2f\n",media);
   
    if(media >= 7){
        printf("Aprovado\n");

       
        } 
       else if(media <= 4){
            printf("Reprovado\n");
    }
    else{
        printf("Recuperação\n");
    }
    return 0;

}