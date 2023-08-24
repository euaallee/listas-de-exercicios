#include <stdio.h>

int main(){
    int n1, n2, n3, calcMulti;

    printf("==================\n");
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("==================\n");
    printf("digite outro numero: ");
    scanf("%d", &n2);
    printf("==================\n");
    printf("por ultimo digite mais um numero: ");
    scanf("%d", &n3);

    calcMulti = n1 * n2 * n3;

    printf("A multiplicacao dos numeros %d, %d, %d e igual a %d\n\n", n1, n2, n3, calcMulti);

    return 0;
}