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
