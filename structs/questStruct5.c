#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

typedef struct {
	char nome[30];
	char endereco[50];
	char tel[50];
	char email[50];
	float salario;
	
} Registro;

int main(){
	Registro relacao[MAX];
	int i, maiorSalarioPosicao = 0;
	float totalSalario = 0.0, maiorSalario = 0.0;
	char op[4];
	
	printf("\n\nREGISTRO DIARIO\n\n");
	for (i = 0; i < MAX; i++){
		printf("Nome: ");
		gets(relacao[i].nome);
		if (strcmp(relacao[i].nome, "fim") == 0){
			break;
		}
		printf("Endereco: ");
		gets(relacao[i].endereco);
		
		if (strcmp(relacao[i].endereco, "fim") == 0){
			break;
		}
		
		printf("Telefone: ");
		gets(relacao[i].tel);
		
		if (strcmp(relacao[i].tel, "fim") == 0){
			break;
		}
		
		printf("Email: ");
		gets(relacao[i].email);

		if (strcmp(relacao[i].email, "fim") == 0){
			break;
		}
		
		printf("Salario: ");
		scanf("%f", &relacao[i].salario);
		
		fflush(stdin);	
	}
	
	
	
	for (i = 0; i < MAX; i++){
		totalSalario += relacao[i].salario;
		
		if (relacao[i].salario > maiorSalario){
			maiorSalario = relacao[i].salario;
			maiorSalarioPosicao = i;
		}
	}
	
	printf("\n\nTotal de salario: R$%.2f\n", totalSalario);
	printf("\n\nMaior salario\n");
	printf("Salario: R$%.2f\n", maiorSalario);
	printf("Pertence: %s\n", relacao[maiorSalarioPosicao].nome);
	

	return 0;
}
