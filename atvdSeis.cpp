#include <stdio.h>

int main(){
    int B, b, h, calcArea;

    printf("Digite o valor da base maior: ");
    scanf("%d", &B);

    printf("\nDigite o valor da base menor: ");
    scanf("%d", &b);

    printf("\nDigite o valor da altura: ");
    scanf("%d", &h);

    calcArea = ((B+b) * h)/2;

    printf("A area do trapazio e de %du.a\n\n\n", calcArea);

    return 0;
}