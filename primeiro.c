/*
Este programa pede ao usuário um numero qualquer depois exibe na tela
 */ 

#include <stdio.h> // estamos importando uma biblioteca para trabalhar com entrada e saida de dados 


int main(){
    int idade; // declaração da variavel idade do tipo inteiro
    printf("*Digite a sua idade e tecle enter \n");
    scanf("%d",&idade); // para pegar o numero digitado pelo usuario
                        //estamos usando o comando scanf e adicionada
                        //o valor digitado ao endereço de memoria 
                        //da variavel idade. usamos o e-comercial para 
                        // referenciar o endereço de memoria da variavel
                        //idade 
    printf("A Idade digitada é %d\n endereco da variavel idade %x \n",idade, &idade);
    return 0;                         
}
