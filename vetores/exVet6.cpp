#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, vetNormal[5], vetInvert[5];
	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetNormal[i]);
	}
	for(i = 0; i < 5; i++){
		vetInvert[i] = vetNormal[5-i-1];
	}

	for(i = 0; i < 5; i++){
		printf("%d", vetNormal[i]);
	}
	printf(" <-- ORIGINAL");
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d", vetInvert[i]);
	}
	printf(" <-- INVERTIDO");
	return 0;
}
