#include <stdio.h>

int main(){
    float salario = 1600, qtdVendas,valorVendas, calcQtdVendas, calcVendasEComissa, salarioFinal;

    printf("Quantas vendas: ");
    scanf("%f", &qtdVendas);
    printf("Valor das vendas: R$");
    scanf("%f", &valorVendas);

    calcQtdVendas = valorVendas / qtdVendas;
    calcVendasEComissa = 0.4 * valorVendas;
    salarioFinal = calcVendasEComissa + salario;

    printf("O funcinario que recebe R$%0.2f\nFez %0.0f vendas no valor de R$%0.2f\nSua comissao foi de R$%0.2f\nSalario final: R$%0.2f\n\n", salario, calcQtdVendas, valorVendas, calcVendasEComissa, salarioFinal);
    return 0;
}