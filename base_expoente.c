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
