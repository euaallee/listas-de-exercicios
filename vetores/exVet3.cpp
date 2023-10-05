#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, soma = 0, vetInt[5];
	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetInt[i]);
	}
	
	for(i = 0; i < 5; i++){
		if((vetInt[i]%2) != 0){	
			soma+= vetInt[i];
		}
	}
	
	printf("\nA soma dos valores impares e %d", soma);

	return 0;
}
