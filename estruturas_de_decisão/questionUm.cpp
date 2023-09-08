#include <stdio.h>
#include <math.h>

int main() {
    int opMenu;
    float precoProd, vezes, valorDesconto;
    
    printf("Preco do produto: R$");
    scanf("%f", &precoProd);
    
    printf("==============================OPCAO==============================\n");
    printf("| [1] A vista em dinheiro ou cheque, recebe 10%% de desconto     |\n");
    printf("| [2] A vista no cartao de cradito 15%% de desconto              |\n");
    printf("| [3] Em duas vezes, preco normal de etiqueta sem juros         |\n");
    printf("| [4] Em tres vezes, preco normal de etiqueta mais juros de 10%% |\n");
    printf("=================================================================\n");
    
    printf("Qual opcao desejada: ");
    scanf("%d", &opMenu);
    
    switch(opMenu){
        case 1:
            printf("Preco original: R$%0.2f\n", precoProd);
            valorDesconto = (precoProd * 0.10);
            printf("O valor total: R$%0.2f", precoProd - valorDesconto);
            break;
        case 2:
            printf("Preco original: R$%0.2f\n", precoProd);
            valorDesconto = (precoProd * 0.15);
            printf("O valor total: R$%0.2f", precoProd - valorDesconto);
            break;
        case 3:
            printf("Preco original: R$%0.2f\n", precoProd);
            valorDesconto = precoProd / 2;
            printf("O valor total: R$%0.2f\n", valorDesconto);
            printf("Em 2x de R$%0.2f: R$%0.2f", precoProd, valorDesconto);
            break;
        case 4:
            printf("Preco original: R$%0.2f\n", precoProd);
            vezes = precoProd + (precoProd * 0.10);
            valorDesconto = vezes / 3;
            printf("O valor total: R$%0.2f\n", vezes);
            printf("Em 3x de R$%0.2f: R$%0.2f", vezes, valorDesconto);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    
    
    
    return 0;
}