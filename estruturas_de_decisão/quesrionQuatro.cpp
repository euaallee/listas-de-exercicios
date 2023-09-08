#include <stdio.h>
#include <math.h>

int main() {
    int coeA, coeB, coeC, delta, raiz, raiz1, raiz2;
    
    printf("Equacao de segundo grau\n");
    printf("Digite o coeficientes a: ");
    scanf("%d", &coeA);
    
    if(coeA == 0){
        printf("o coeficiente a é zero, logo não tem raiz.\nTchau\n");
    }else{
        printf("Digite o coeficiente b: ");
        scanf("%d", &coeB);
        printf("Digite o coeficiente c: ");
        scanf("%d", &coeC);
        delta = (coeB * coeB) - (4*coeA*coeC);
        
        if(delta < 0){
            printf("Delta menor que 0.\nRaízes imaginárias.\nTchau\n");
            printf("%d", delta);
        }else{
            if(delta == 0){
                raiz = -coeB / (2*coeA);
                printf("Delta = 0\nraiz = %d\n", raiz);
            }else{
                raiz1 = (-coeB + sqrt(delta) ) / (2*coeA);
                raiz2 = (-coeB - sqrt(delta) ) / (2*coeA);
                printf("Raizes: %0.1d e %0.1d\n", raiz1, raiz2);
            }
        }
    }
    
    return 0;
}