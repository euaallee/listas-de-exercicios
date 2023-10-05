#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, maiorElemento, positionMaior, menorElemento, positionMenor, vetInicial[5];
	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetInicial[i]);
	}
	
	maiorElemento = vetInicial[0];
	
	for(i = 1; i < 5; i++){
		if(vetInicial[i] > maiorElemento){
			maiorElemento = vetInicial[i];
			positionMaior = i;
		}
	}
	
	menorElemento = vetInicial[0];
	
	for(i = 1; i < 5; i++){
		if(vetInicial[i] < menorElemento){
			menorElemento = vetInicial[i];
			positionMenor = i;
		}
	}
	

	printf("\n");
	printf("%d <-Maior valor do vetor", maiorElemento);
	printf("\n");
	printf("%d <-Index do vetor onde esta o valor", positionMaior);
	printf("\n");
	printf("%d <-Maior valor do vetor", menorElemento);
	printf("\n");
	printf("%d <-Index do vetor onde esta o valor", positionMenor);


	return 0;
}
