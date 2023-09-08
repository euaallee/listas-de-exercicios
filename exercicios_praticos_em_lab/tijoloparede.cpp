#include <stdio.h>
#include <math.h>

int main() {
    float qtd, ct, lt, cp, lp, at, ap;
    
    printf("Qual o comprimento do tijolo e a largra do mesmo\n");
    printf("Comprimento do tijilo: ");
    scanf("%f", &ct);
    printf("Largura do tijolo: ");
    scanf("%f", &lt);
    
    printf("Qual as dimensões da parede a ser construída\n");
    printf("Comprimento da parede: ");
    scanf("%f", &cp);
    printf("Largura da parede: ");
    scanf("%f", &lp);
    
    at = (ct / 100) * (lt / 100);
    ap = cp * lp;
    qtd = ap / at;
    
    printf("A quantidade de tijolos para construir uma parede de %0.2fm x %0.2fm serao nescessario %0.2f tijolos", cp, lp, qtd);

    return 0;
}