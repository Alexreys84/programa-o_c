#include<stdio.h>

int subtrair(int *x, int *y){
    printf("posição x %p\n e Posição y %p",x,y);
    return *x - *y;

}
int main(){
    
    int v1 = 10;
    int v2 = 5;
    printf("Posição v1 %p\n e Posição v2 %p",&v1,&v2);
    int rs = subtrair(&v1, &v2);
    printf("O Resultado e %d\n",rs);
    
    return 0;
}