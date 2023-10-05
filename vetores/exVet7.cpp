#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, tempSemanal[7];
	float tempMedia = 0, acimaMedia = 0;
	
	for(i = 0; i < 7; i++){
		scanf("%d", &tempSemanal[i]);
		tempMedia+= tempSemanal[i];
	}
	
	tempMedia/=7;
	
	for(i = 0; i < 7; i++){
		if(tempSemanal[i] >= tempMedia){
			acimaMedia++;
		}
	}
	
	printf("%d", acimaMedia);

	return 0;
}
