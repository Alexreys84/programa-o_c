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
#### While1.c

```c
#include <stdio.h>

int main(){
    int i = 0;
    while( i <= 10){
        printf("%d\n",i);
        i++;

    }
return 0;
}
```
#### while_Bissexto.c

```c

#include <stdio.h>
int main(){
    int ano = 1950;
    int qtd = 0;

    while( ano <= 2024){
        if( ano % 4 == 0){
            printf("O Ano %d e Bissexto\n",ano);
            qtd++;

        }
        ano++;
    }
    printf("Temos %d anos bissexto\n",qtd);
    return 0;

}

```

#### While dec bin 

```c
#include <stdio.h>

int main(){
    
    int dec = 22;
    int resto = 0;
    int pos = 1;
    int rs = 0;
while(dec > 0){
    resto = dec % 2;
    dec = dec / 2;
    rs = rs + pos * resto;
    pos = pos * 10;
}
printf("%d\n",rs);
return 0;
}

```

#### While bin dec.c

```c
#include <stdio.h>
#include <math.h>

int main(){

    int binario[6]=(1,0,1,1,1,0);
    int rs = 0;
    int pos=0;
    int exp = 5;

    while (pos<= 5){
        rs+= binario[pos] * (pow(2 , exp));
        pos++;
        exp--;
    }
    printf("%d\n",rs);
    return 0;

}
```
#### Coleção2.c
```c
#include <stdio.h>
int main(){

    int loud[10]={1,21,11,8,19,45,7,24,26,18};
    int soma = 0;
    int media = 0;
    int i;
    for(i=0; i <= 9 ; i++){
        soma += loud[i];

    }
    printf("O resultado da soma é %d\n",soma);
    for(i = 0; i < 10 ; i++){
        media += loud[i];

    }
    printf("O resultado da média é %d/n",(media / 10));
    for( i = 0 ; i < 10 ; i++){
        if( loud[i]% 2 == 0){
            printf("%d\n",loud[i]);
        }
    }

return 0;

}
```
#### Coleção1.c

```c
//Array é um conjunto de Dados sobre um determinado 
//assunto. Podemos falar de valores numérico, textos,
//datas, ou objetivos.
#include <stdio.h>


int main(){
    int valores [5] ={10,5,8,12,7};
    printf("%d\n",valores[3]);
    return 0;
}

```
#### For1.c
```c
#include <stdio.h>

int main(){
    int x;
    for(x =1; x <= 10 ; x++){
        printf("%d\n",x);
    }
    return 0;
}
```
#### Base Expoente.c

```c
#include <stdio.h>

int calcularPotencia(int base, int expoente) {
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite um numepro para base: ");
    scanf("%d", &base);

    printf("Digite um numero para o expoente: ");
    scanf("%d", &expoente);

    int resultado = calcularPotencia(base, expoente);

    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);

    return 0;
}

```

#### Coleções iguais Array
```c
#include <stdio.h>
 
int main() {
    int c1[10] = {10, 5, 68, 8, 47, 12, 54, 13, 62, 11};
    int c2[15] = {11, 5, 62, 112, 84, 76, 12, 55, 59, 85, 13, 0, 14, 19, 18};
 
    printf("Números iguais nos dois arrays:\n");
 
    int i, a;
 
    for (i = 0; i < 10; i++) {
        for (a = 0; a < 15; a++) {
            if (c1[i] == c2[a]) {
                printf("%d\n", c1[a]);
            }
        }
    }
 
 
    return 0;
}
 
```
#### Tabuada.c
```c
#include <stdio.h>

int main(){
    int num, num2;
    printf("Digite um numero para Tabuada:\n");
    scanf("%d",&num);
    for( num2 = 1; num2 <=10; num2++){
        printf("%d x %d = %d\n", num, num2,(num*num2));

    }
    return 0;
}
```