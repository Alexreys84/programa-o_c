# Estudo da linguagem C
## Este repositório será publicado arquivos escritos em C
<img src="https://programacaopratica.com.br/wp-content/uploads/2019/01/c2-360x240.png" height= "250" width="250">

### Abaixo é Apresentado os arquivos deste repositório

#### hello.c
```c
#include <stdio.h>
#include <stdio.h>
int main(){
    printf("Hello World\n");
    return 0;
} 
```
### Calculo de Nota.c 

```c
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
```
#### Operações.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("digite um numero e tecle enter: \n");
    scanf("%d",&n1);

    printf("Digite outro numero e tecle enter: \n");
    scanf("%d", &n2);
    soma = n1 + n2;
    subtrair = n1 -n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma e %d\n",soma);
    printf("O resultado da subitrair é %d\n", subtrair);
    printf("O resultado da multiplicaçao é %d\n", multiplicar);
    printf("O resultado da divisao é %d\n", dividir);

    return 0;


    }
```
#### Descontos.c

```c
#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;
    printf("Digite o preço do Produto: \n");
    scanf("%f",&preco);
    printf("Digite o desconto do Produto: \n");
    scanf("%f",&percentual);
    resultado = preco - (preco * (percentual / 100));
    vdesc = preco -resultado;
    printf("O preço do produto com desconto de %2.2f é %2.2f\n",vdesc,resultado);

    return 0;

}
```

#### Primeiro.c

```c
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

```