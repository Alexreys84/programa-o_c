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

#### Par e Impar.c

```c

#include <stdio.h>

int main(){
    int num;
    printf("Digite um Numero: \n");
    scanf("%d",&num);

    if( num % 2 == 0){
        printf("Este numero é par \n");
    }
    else{
        printf("Este numero é impar \n");
    }
    return 0;

}
```
#### Média do Aluno
```C
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
```

#### Ano Bissexto.c
```c
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
```