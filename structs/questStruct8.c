#include <stdio.h>
#include <stdlib.h>

#define TURMA 20

typedef struct {
	char nome[30];
	int idade;
	char endereco[30];
	char datains[11];
	char dataCart[11];
} Registro;

int main(){
	Registro alunos[TURMA];
	int i, idadeIguais = 0, vetIdadeIguais[TURMA], positionNovin = 0, novin;
	
	for (i = 0; i < TURMA; i++){
		printf("\nNome do Aluno: ");
		gets(alunos[i].nome);
		
		printf("Idade do Aluno: ");
		scanf("%d", &alunos[i].idade);
		
		novin = alunos[i].idade;
		
		fflush(stdin);
		
		printf("Endereco do Aluno: ");
		gets(alunos[i].endereco);
		
		printf("Data de Inscricao: ");
		gets(alunos[i].datains);
		
		printf("Data da Carteira: ");
		gets(alunos[i].dataCart);
		
		fflush(stdin);
	}
	
	for (i = 0; i < TURMA; i++){
		if (alunos[i].idade <= novin){
			novin = alunos[i].idade;
			positionNovin = i;
			idadeIguais++;
		}
	}
	
	printf("\n\nDADOS DO ALUNO\n");
	printf("Nome do Aluno: %s\n", alunos[positionNovin].nome);
	printf("Idade: %d\n", alunos[positionNovin].idade);
	printf("Endereco: %s\n", alunos[positionNovin].endereco);
	printf("Data de Inscricao: %s\n", alunos[positionNovin].datains);
	printf("Data da Carteira: %s\n", alunos[positionNovin].dataCart);
 
	return 0;
}
