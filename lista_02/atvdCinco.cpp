#include <stdlib.h>
#include <stdio.h>

int main(){
	float valor;
    int notas, moedas, notaUm, notaDois, notaTres, notaQuatro, notaCinco, notaSeis, notaSete, notaOito, notaNove, notaDez, notaOnze, notaDoze;
    
    printf ("quantidade de notas: ");
    scanf ("%f", &valor);
    
    notas = valor;
    moedas = (valor - notas) * 100;
    
    
    notaUm = notas/100;
    notas = notas - (notaUm*100);
    
    notaDois = notas/50;
    notas = notas - (notaDois*50);
    
    notaTres = notas/20;
    notas = notas - (notaTres*20);
    
    notaQuatro = notas/10;
    notas = notas - (notaQuatro*10);
    
    notaCinco = notas/5;
    notas = notas - (notaCinco*5);
    
	notaSeis = notas/2;
    notas = notas - (notaSeis*2);
        
    /*==============================*/
    
    
    
    
	notaSete = notas;
    moedas = moedas - (notaSete*1);
    
	notaOito = moedas/50;
	moedas = moedas - (notaOito*50);

	notaNove = moedas/25;
	moedas = moedas - (notaNove*25);
	
	notaDez = moedas/10;
	moedas = moedas - (notaDez*10);
	
	notaOnze = moedas/5;
	moedas = moedas - (notaOnze*5);
	
	notaDoze = moedas/1*1;
    
    
	printf("%d\n", valor);
    printf("NOTAS:\n");
    printf("%d notas(s) de R$ 100,00\n", notaUm);
    printf("%d notas(s) de R$ 50,00\n", notaDois);
    printf("%d notas(s) de R$ 20,00\n", notaTres);
    printf("%d notas(s) de R$ 10,00\n", notaQuatro);
    printf("%d notas(s) de R$ 5,00\n", notaCinco);
    printf("%d notas(s) de R$ 2,00\n", notaSeis); 
    printf("MOEDAS\n");
    printf("%d moeda(s) de R$1,00\n", notaSete);
    printf("%d moeda(s) de R$0,50\n", notaOito);
    printf("%d moeda(s) de R$0,25\n", notaNove);
    printf("%d moeda(s) de R$0,10\n", notaDez);
    printf("%d moeda(s) de R$0,05\n", notaOnze);
    printf("%d moeda(s) de R$0,01\n", notaDoze);
    
	return 0;
}

