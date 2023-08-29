#include <stdlib.h>
#include <stdio.h>

int main(){
	float velocidadeMedia, tempoviagem, velocidade = 12, gasolina;
	
	printf("tempo de viagem: \n");
	scanf("%f", &tempoviagem);
	printf("velocidade: KM/h\n");
	scanf("%f", &velocidadeMedia);

	gasolina = (tempoviagem / velocidade) * velocidadeMedia;
	
	printf("%0.3f", gasolina);

	return 0;
}

