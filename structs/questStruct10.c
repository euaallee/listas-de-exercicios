#include <stdio.h>
#include <stdlib.h>

#define ATLETAS 15

typedef struct {
	int matricula;
	int idade;
	float altura;
} TipoAtleta;

int main(){
	TipoAtleta jogadores[ATLETAS];
	int i, somaIdade, somaAltura;
	float mediaIdade, mediaAltura;
	
	for (i = 0; i < ATLETAS; i++){
		printf("\nMatricula do Atleta: ");
		scanf("%d", &jogadores[i].matricula);

		printf("Idade do Atleta: ");
		scanf("%d", &jogadores[i].idade);

		printf("Altura do Atleta: ");
		scanf("%f", &jogadores[i].altura);

		fflush(stdin);
	}
	
	printf("\n\nDADOS LIDOS:\n\n");
	for (i = 0; i < ATLETAS; i++){
		somaIdade += jogadores[i].idade;
		somaAltura += jogadores[i].altura;
		
		mediaIdade = (float)somaIdade/ATLETAS;
		mediaAltura = (float)somaAltura/ATLETAS;
		
		printf("\nMatricula do Atleta: %d\n", jogadores[i].matricula);
		printf("Idade do Atleta: %d\n", jogadores[i].idade);
		printf("Altura do Atleta: %.2f\n", jogadores[i].altura);
	}
	
	printf("\n\nMedias\n");
	printf("Media de idade: %d\n", mediaIdade);
	printf("Media de altura: %.2f\n", mediaAltura);

	return 0;
}
