#include <stdio.h>
#include <stdlib.h>

#define TURMA 100

typedef struct {
	char nome[30];
	int matricula;
	float nota1, nota2;
} Cadastro;

int main(){
	Cadastro alunos[TURMA];
	int i, posisaoAluno = 0;
	float media, maiorMedia = 0.0;

	for (i = 0; i < TURMA; i++){
		printf("\nNome do Aluno: ");
		gets(alunos[i].nome);
		
		printf("Matricula do Aluno: ");
		scanf("%d", &alunos[i].matricula);
		
		printf("Nota 1 do Aluno: ");
		scanf("%f", &alunos[i].nota1);
		
		printf("Nota 2 do Aluno: ");
		scanf("%f", &alunos[i].nota2);
		
		fflush(stdin);
	}
	
	for (i = 0; i < TURMA; i++){
		media = (alunos[i].nota1 + alunos[i].nota2)/2;
		if(media > maiorMedia){
			maiorMedia = media;
			posisaoAluno = i;
		}
	}
	
	printf("\n\nAluno com maior media\n");
	printf("Nome: %s\n", alunos[posisaoAluno].nome);
	printf("Matricula: %d\n", alunos[posisaoAluno].matricula);
	printf("Media: %.2f\n", maiorMedia);

	return 0;
}
