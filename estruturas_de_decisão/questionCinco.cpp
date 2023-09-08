#include<stdio.h>
#include<math.h>

int main(){

    float qtd1, qtd2, valorPremio, propP1, propP2;

    printf("Digite a quantia do apostador 1: ");
    scanf("%f", &qtd1);
    printf("Digite a quantia do apostador 2: ");
    scanf("%f", &qtd2);
    printf("Digite o valor do premio: ");
    scanf("%f", &valorPremio);

    proP1 = qtd1 / (qtd1 + qtd2);
    proP2 = qtd2 / (qtd1 + qtd2);

    printf("\nO apostador 1 ganhou: %.2f\nO apostador 2 ganhou: %.2f", valorPremio * propP1, valorPremio * proP2);

    return 0;
}