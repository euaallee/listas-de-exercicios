#include <stdio.h>
#include <math.h>

int main() {
    int num, separarPara1, separarPara2, quadrado;
    
    printf("Digite um numero entre 1000 a 10000: ");
    scanf("%d", &num);
    
    separarPara1 = num / 100;
    separarPara2 = num % 100;
    
    quadrado = pow(separarPara1 + separarPara2, 2);
    
    if(quadrado <= 1000 && quadrado < 10000){
        printf("Fora\n");
    }else{
        printf("Dentro\n");
    }
    
    return 0;
}