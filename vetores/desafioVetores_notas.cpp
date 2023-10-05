#include <stdio.h>
#include <stdlib.h>

int main(){
	int numTestes, i, j, numRepetido = 0;
	
	scanf("%d", &numTestes);
	int notas[numTestes];
	
	for(i = 0; i < numTestes; i++){
		scanf("%d", &notas[i]);
	}
	for(i = 0; i < numTestes; i++){
		for(j = i+1; j < numTestes; j++){	
			if( notas[i] == notas[j] ){
				numRepetido = notas[i];
			}
		}
	}
	printf("%d", numRepetido);
	
	return 0;
}
