#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n;
	printf("Numero de testes: ");
	scanf("%d", &n);
	int vetUm[n], vetDois[n], vetResultantes[n];
	
	printf("PRIMEIRO VETOR\n");
	for(i = 0; i < n; i++){
		scanf("%d", &vetUm[i]);
	}
	printf("SEGUNDO VETOR\n");
	for(i = 0; i < n; i++){
		scanf("%d", &vetDois[i]);
	}
	
	for(i = 0; i < n; i++){
		vetResultantes[i] = vetUm[i] + vetDois[i];
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", vetResultantes[i]);
	}
	


	return 0;
}
