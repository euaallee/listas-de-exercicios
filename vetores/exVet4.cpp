#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, soma = 0, vetInt[10];
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetInt[i]);
	}
	
	for(i = 0; i < 10; i++){
		if((vetInt[i]%2) == 0){
			vetInt[i] = 0;
		}else {
			vetInt[i] = 1;
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("%d ", vetInt[i]);
	}

	return 0;
}
