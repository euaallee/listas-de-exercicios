#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
	char nome[50];
	float media;
} Aluno;

int main(){
	Aluno turma[5];
	int i, posicaoMaiorMedia;
	float mediaMaior = 0;
	
	for (i = 0; i < 5; i++){
		printf("Nome do Aluno %d: ", i+1);
		gets(turma[i].nome);
		printf("Media do Aluno %d: ", i+1);
		scanf("%f", &turma[i].media);
		fflush(stdin);		
	}                      
	
	for (i = 0; i < 5; i++){	
		if(turma[i].media >= mediaMaior){
			mediaMaior = turma[i].media;
			posicaoMaiorMedia = i;
		}
		
	}      
	
	printf("Aluno: %s\n", turma[posicaoMaiorMedia].nome);
	printf("Media: %.2f\n", mediaMaior);
	
	return 0;
}                           		