#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, numTestes;
	
	scanf("%d", &numTestes);
	int nota[numTestes];
	char aluno[numTestes][30];
	
	for (i = 0; i < numTestes; i++){
		scanf("%s", &aluno[i]);
		scanf("%d", &nota[i]);
	}

	for (i = 0; i < numTestes; i++){
		if(nota[i] >= 7){
			printf("\n");
			printf("%s esta aprovad@ com media %d", aluno[i], nota[i]);
			printf("\n");
			printf("-----------------------------------------\n");
		}
	}


	return 0;
}
