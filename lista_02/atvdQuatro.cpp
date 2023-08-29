#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor, troco, notaUm, notaDois, notaTres, notaQuatro, notaCinco, notaSeis, notaSete;
    
    printf ("quantidade de notas: ");
    scanf ("%d", &valor);
    
    troco = valor;
    
    notaUm = troco/100;
    troco = troco - (notaUm*100);
    
    notaDois = troco/50;
    troco = troco - (notaDois*50);
    
    notaTres = troco/20;
    troco = troco - (notaTres*20);
    
    notaQuatro = troco/10;
    troco = troco - (notaQuatro*10);
    
    notaCinco = troco/5;
    troco = troco - (notaCinco*5);
    
	notaSeis = troco/2;
    troco = troco - (notaSeis*2);
    
	notaSete = troco/1;
    troco = troco - (notaSete*1);
    
	printf("%d\n", valor);
    printf("%d notas(s) de R$ 100,00\n", notaUm);
    printf("%d notas(s) de R$ 50,00\n", notaDois);
    printf("%d notas(s) de R$ 20,00\n", notaTres);
    printf("%d notas(s) de R$ 10,00\n", notaQuatro);
    printf("%d notas(s) de R$ 5,00\n", notaCinco);
    printf("%d notas(s) de R$ 2,00\n", notaSeis);
    printf("%d notas(s) de R$ 1,00\n", notaSete);
    
	return 0;
}

