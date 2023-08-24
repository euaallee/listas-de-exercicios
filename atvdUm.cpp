#include <stdio.h>

int main(){
    int n1, n2, sub;

    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite outro numero: ");
    scanf("%d", &n2);

    sub = n1 - n2;

    printf("a subtracao dos numeros %d e %d e igual a %d\n\n", n1, n2, sub);

    return 0;
}