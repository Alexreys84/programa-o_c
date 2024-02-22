#include <stdio.h>

int subtrair(int x, int y) {
    printf("Valor de x é %d e y é %d\n", x, y);
    return x - y;
}

int main() {
    int v1 = 10;
    int v2 = 5;
    
    printf("Posição de v1 é %p e v2 é %p\n", &v1, &v2);
    
    int rs = subtrair(v1, v2);
    
    printf("O Resultado é %d\n", rs);

    return 0;
}
