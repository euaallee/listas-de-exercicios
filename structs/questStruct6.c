#include <stdio.h>
#include <stdlib.h>

#define FUN 20

typedef struct {
	int nFunc;
	char nome[30];
	char dataNasc[11];
	char estCivil[15];
	char endereco[30];
	char rg[15];
	char cpf[14];
	char fone[10];
	int nDepart;
} Funcionario;

int main(){
	Funcionario funcionarios[FUN];
	int i, numFunc;
	
	for (i = 0; i < FUN; i++){
		
		fflush(stdin);
		
		printf("Numero do Funcionario: ");
		scanf("%d", &funcionarios[i].nFunc);
		
		if (funcionarios[i].nFunc <= 0){
			printf("Termino da busca...");
			return 0;
		}
		
		fflush(stdin);
		
		printf("Nome do Funcionario: ");
		gets(funcionarios[i].nome);
		
		printf("Data de Nascimento do Funcionario ex(22/05/2004): ");
		gets(funcionarios[i].dataNasc);
		
		printf("Estado Civil do Funcionario: ");
		gets(funcionarios[i].estCivil);
		
		printf("Endereco do Funcionario: ");
		gets(funcionarios[i].endereco);
		
		printf("RG do Funcionario: ");
		gets(funcionarios[i].rg);
		
		printf("CPF do Funcionario: ");
		gets(funcionarios[i].cpf);
		
		printf("Numero do Departamento: ");
		scanf("%d", &funcionarios[i].nDepart);
		
		fflush(stdin);
	
	}
	
	printf("Digite o Numero do Funcionario para encontrar-lo: ");
	scanf("%d", &numFunc);
	
	for (i = 0; i < FUN; i++){
		
		if (funcionarios[i].nFunc == numFunc){
			printf("\n\nNumero do Funcionario: %d\n", funcionarios[i].nFunc);
			printf("Nome do Funcionario: %s\n", funcionarios[i].nome);
			printf("Data de Nascimento do Funcionario: %s\n", funcionarios[i].dataNasc);
			printf("Estado Civil do Funcionario: %s\n", funcionarios[i].estCivil);
			printf("Endereco do Funcionario: %s\n", funcionarios[i].endereco);
			printf("RG do Funcionario: %s\n", funcionarios[i].rg);
			printf("CPF do Funcionario: %s\n", funcionarios[i].cpf);
			printf("Numero do Departamento: %d\n", funcionarios[i].nDepart);
			break;
		} else {
			printf("funcionario inexistente");
		}
	}


	return 0;
}