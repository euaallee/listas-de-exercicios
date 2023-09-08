#include <stdio.h>
#include <math.h>

int main() {
    int dia, mes, ano, num;
    
    printf("Digite seu dia de nascimento-> ");
    scanf("%d", &dia);
    printf("Digite seu mes de nascimento-> ");
    scanf("%d", &mes);
    printf("Digite seu ano de nascimento-> ");
    scanf("%d", &ano);
    
    num = (dia*100) + mes;
    num = num + ano;
    int num1;
    int num2;
    num1 = num / 100;
    num2 = num % 100;
    int numFinal;
    numFinal = num1 + num2;
    numFinal = numFinal % 5;
    printf("%d -> ", numFinal);
    
    switch(numFinal){
        case 0:
            printf("Timido");
            break;
        case 1:
            printf("Sonhador");
            break;
        case 2:
            printf("Paquerador");
            break;
        case 3:
            printf("Atraente");
            break;
        case 4:
            printf("Irresistivel");
            break;
        default:
            printf("Voce nao e nada, sinto muito");
            break;
    }
    
    return 0;
}