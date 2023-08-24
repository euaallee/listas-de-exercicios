#include <stdio.h>

int main(){
    float custoEspetaculo, precoConvite, calcQtdConvite;

    printf("Qual o custo do espetaculo: ");
    scanf("%f", &custoEspetaculo);
    printf("Preco do convite: ");
    scanf("%f", &precoConvite);

    calcQtdConvite = custoEspetaculo / precoConvite;

    printf("\n\nPara alcancar o custo de R$%0.2f.\nE nescessario vender %0.0f convites no valor de R$%0.2f\n\n", custoEspetaculo, calcQtdConvite, precoConvite);

    return 0;
}