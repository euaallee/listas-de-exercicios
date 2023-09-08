#include <stdio.h>
#include <math.h>

int main() {
    int matriculaAluno, numFinal; //25504
    
    printf("Insira a matricula do aluno: ");
    scanf("%d", &matriculaAluno);

    numFinal = matriculaAluno % 100;
    
    if(numFinal >= 0 && numFinal <= 29){
        printf("O pagamento sera no primeito dia util\n");
    }    if(numFinal >= 30 && numFinal <= 49){
            printf("O pagamento sera no segundo dia util\n");
        }   if(numFinal >= 50 && numFinal <= 69){
                printf("O pagamento sera no terceiro dia util\n");
            }   if(numFinal >= 70 && numFinal <= 89){
                    printf("O pagamento sera no quarto dia util\n");
                }   if(numFinal >= 90 && numFinal <= 99){
                        printf("O pagamento sera no quinto dia util\n");
                    }
    
    return 0;
}