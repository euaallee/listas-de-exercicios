#include <stdio.h>
#include <stdlib.h>

typedef struct cliente {
	char nome[50];
	char endereco[50];
	int tell;
} Cliente;

int main(){
	int addCliente, i;
	
	printf("Quantos clientes deseja cadastrar: ");
	scanf("%d", &addCliente);
	Cliente clientes[addCliente];
	
	fflush(stdin);
	
	for(i = 0; i < addCliente; i++){
		printf("Nome do cliente: ");
		gets(clientes[i].nome);
		
		printf("Endereco do cliente: ");
		gets(clientes[i].endereco);
		
		printf("Telefone do cliente: ");
		scanf("%d", &clientes[i].tell);
		
		fflush(stdin);
	
	}
	
		for(i = 0; i < addCliente; i++){
		printf("Nome do cliente: %s\n", clientes[i].nome);		
		printf("Endereco do cliente: %s\n", clientes[i].endereco);		
		printf("Telefone do cliente: %d\n", clientes[i].tell);
		
	}

	return 0;
}
