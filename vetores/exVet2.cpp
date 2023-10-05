#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vetUm[10], vetDois[10], vetResultantes[10];
	
	printf("PRIMEIRO VETOR\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetUm[i]);
	}
	printf("SEGUNDO VETOR\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetDois[i]);
	}
	
	for(i = 0; i < 10; i++){
		vetResultantes[i] = vetUm[i] * vetDois[i];
	}
	
	for(i = 0; i < 10; i++){
		printf("%d ", vetResultantes[i]);
	}
	


	return 0;
}
