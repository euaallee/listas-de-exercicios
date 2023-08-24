#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    float raio, comprimento, area, volume;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    area = PI * pow(raio, 2.0);

    volume = (4* (PI * pow(raio, 3.0)))/3;

    printf("Comprimento da esfera: %0.2f\n\n", comprimento);
    printf("Area da esfera: %0.2f\n\n", area);
    printf("Volume da esfera: %0.2f\n\n", volume);

    return 0;
}