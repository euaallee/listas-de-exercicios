#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vetInt[10];
	float media = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetInt[i]);
	}
	
	for(i = 0; i < 10; i++){
		media+= vetInt[i];
	}
	
	media /= 10;
	
	printf("\nA media e %f", media);

	return 0;
}