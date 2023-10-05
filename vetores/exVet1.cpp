#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, pares = 0, numIntVet[20];

	for(i = 0; i < 20; i++){
		scanf("%d", &numIntVet[i]);
	}
	
	for(i = 0; i < 20; i++){
		for(j = i + 1; j <= 20; j++){	
			if (numIntVet[i] == ((j%2) == 0)){
				pares++;
			}
		}
	}
	printf("%d", pares);


	return 0;
}
