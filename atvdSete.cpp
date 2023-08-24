#include <stdio.h>
#include <math.h>

int main(){
    float catetoA, catetoB, hipo, calcHipo;

    printf("Digite o valor do cateto A: ");
    scanf("%f", &catetoA);
    printf("Digite o valor do cateto B: ");
    scanf("%f", &catetoB);

    hipo = pow(catetoA, 2.0) + pow(catetoB, 2.0);

    calcHipo = sqrt(hipo);

    printf("Valor da hipotenusa e igual %0.2f", calcHipo);

    return 0;
}