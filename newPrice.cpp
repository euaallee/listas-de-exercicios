#include <stdio.h>

int main(){
    float priceItem, desconto, newPriceItem;

    printf("Insira o preco do produto para ganhar desconto de 10%%\n");
    printf("Preco: R$");
    scanf("%f", &priceItem);

    newPriceItem = priceItem - (0.1 * priceItem);

    desconto = priceItem - newPriceItem;

    printf("O produto no preco de R$%0.2f\nEsta com desconto de R$%0.2f\nSeu novo preco e de R$%0.2f\n\n", priceItem, desconto, newPriceItem);

    return 0;
}