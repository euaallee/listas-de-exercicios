#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

typedef struct {
	char nome[30];
	char endereco[50];
	float salario;
	
} Registro;

int main(){
	Registro relacao[MAX];
	int i, maiorSalarioPosicao = 0;
	float maiorSalario = 0.0;
	
	printf("\n\nREGISTRO DIARIO\n\n");
	for (i = 0; i < MAX; i++){
		printf("Nome: ");
		gets(relacao[i].nome);

		printf("Endereco: ");
		gets(relacao[i].endereco);
		
		printf("Salario: ");
		scanf("%f", &relacao[i].salario);
		
		fflush(stdin);	
	}
	
	for (i = 0; i < MAX; i++){
		if (relacao[i].salario > maiorSalario){
			maiorSalario = relacao[i].salario;
			maiorSalarioPosicao = i;
		}
	}
	
	printf("\n\nMaior salario\n");
	printf("Salario: R$%.2f\n", maiorSalario);
	printf("Pertence: %s\n", relacao[maiorSalarioPosicao].nome);
	
	return 0;
}
