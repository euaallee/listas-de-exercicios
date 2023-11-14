#include <stdio.h>
#include <stdlib.h>

typedef struct cliente {
	char nome[50];
	char endereco[50];
	int tell;
} Cliente;

int main(){
	Cliente clientes[50];
	int addCliente, i, cadastrados = 0;
	char op;
	
	fflush(stdin);
	
	printf("Cadastrar Clientes\n");
		
	for (i = 0; i < 50; i++){
		printf("Nome do cliente: ");
		gets(clientes[i].nome);
		
		printf("Endereco do cliente: ");
		gets(clientes[i].endereco);
		
		printf("Telefone do cliente: ");
		scanf("%d", &clientes[i].tell);
		
		fflush(stdin);
		
		printf("Deseja cadastrar mais clientes S/n: ");
		scanf("%c", &op);
		
		fflush(stdin);
		
		switch(op){
			case 'n':
				printf("\n\nForam cadastrados %d clientes\n", i+1);
				cadastrados = i+1;
				if (cadastrados <= 1){	
					printf("\n\nFoi cadastrado 1 cliente\n", i+1);
					for	(i = 0; i < cadastrados; i++){
						printf("Nome do cliente: %s\n", clientes[i].nome);
						printf("Endereco do cliente: %s\n", clientes[i].endereco);
						printf("Telefone do cliente: %d\n\n", clientes[i].tell);
					}
				} else {
					printf("\n\nForam cadastrados %d clientes\n", i+1);
					for	(i = 0; i < cadastrados; i++){
						printf("Nome do cliente: %s\n", clientes[i].nome);
						printf("Endereco do cliente: %s\n", clientes[i].endereco);
						printf("Telefone do cliente: %d\n\n", clientes[i].tell);
					}
				}
				exit(0);
			case 'N':
				cadastrados = i+1;
				if (cadastrados <= 1){	
					printf("\n\nFoi cadastrado 1 cliente\n", i+1);
					for	(i = 0; i < cadastrados; i++){
						printf("Nome do cliente: %s\n", clientes[i].nome);
						printf("Endereco do cliente: %s\n", clientes[i].endereco);
						printf("Telefone do cliente: %d\n\n", clientes[i].tell);
					}
				} else {
					printf("\n\nForam cadastrados %d clientes\n", i+1);
					for	(i = 0; i < cadastrados; i++){
						printf("Nome do cliente: %s\n", clientes[i].nome);
						printf("Endereco do cliente: %s\n", clientes[i].endereco);
						printf("Telefone do cliente: %d\n\n", clientes[i].tell);
					}
				}
				exit(0);
		}
	}	

	return 0;
}