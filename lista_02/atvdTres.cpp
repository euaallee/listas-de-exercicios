#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float distancia, x2, x1, y2, y1;
	
	printf("Valor de x1: ");
	scanf("%f", &x2);
	printf("Valor de y1: ");
	scanf("%f", &x1);
	printf("Valor de x2: ");
	scanf("%f", &y2);
	printf("Valor de y2: ");
	scanf("%f", &y1);

	distancia = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));

	printf("%0.4f", distancia);
	
	return 0;
}

