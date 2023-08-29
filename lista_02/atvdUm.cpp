#include <stdlib.h>
#include <stdio.h>

int main(){
	float salario, ganhos = 0.15, qtdVendas, total;
	char nome[30];
	
	printf("Nome do vendedor: \n");
	scanf("%s", &nome);
	printf("Valor salario: R$\n");
	scanf("%f", &salario);
	printf("Quantidade de vendas efetuadas: R$\n");
	scanf("%f", &qtdVendas);
	
	total = (0.15 * qtdVendas) + salario;
	
	printf("TOTAL = R$%0.2f", total);
	
	
	return 0;
}

