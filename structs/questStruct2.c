#include <stdio.h>
#include <stdlib.h>

typedef struct veiculo {
	char marca[30];
	char modelo[30];
	int ano;
	float preco;
	char cor[30];
	
} Automoveis;

int main(){
	Automoveis veic[6];
	int i, op, add;
	
	while(1){
		printf("\n=============MENU============\n");
		printf("[ 1 ] - Adicionar veiculos\n");
		printf("[ 2 ] - Ver veiculos adicionados\n");
		printf("[ 3 ] - Sair do programa\n");
		printf("=============================\n");
		printf("Opcao: ");
		scanf("%d", &op);
		
		switch (op){
			case 1:
				printf("Quantos veiculos quer adicionar: ");
				scanf("%d", &add);
				fflush(stdin);
				for (i = 0; i < add; i++){
					printf("Nome da Marca: ");
					gets(veic[i].marca);
					
					printf("Modelo: ");
					gets(veic[i].modelo);
					
					printf("Ano do modelo: ");
					scanf("%d", &veic[i].ano);
					
					printf("Preco do veiculo: R$");
					scanf("%f", &veic[i].preco);
	
					fflush(stdin);
	
					printf("Cor do modelo: ");
					gets(veic[i].cor);				
					
					fflush(stdin);
					
					printf("\n\n%s da Marca %s de cor %s do ano %d de preco R$%.2f foi adicionado com sucesso.\n\n", veic[i].modelo, veic[i].marca, veic[i].cor, veic[i].ano, veic[i].preco);
				}
				break;
			case 2:
				printf("\nLista de veiculos\n");
				for (i = 0; i < add; i++){
					printf("Veiculo: %s\n", veic[i].modelo);
					printf("Marca: %s\n", veic[i].marca);
					printf("Ano: %d\n", veic[i].ano);
					printf("Cor: %s\n", veic[i].cor);
					printf("Preco: R$%.2f\n\n", veic[i].preco);
				}
				break;
			case 3:
				printf("\nFechando programa...\n");
				exit(0);
			default:
				printf("Opcao invalida");
				break;
		}
	}

	return 0;
}
