#include <stdio.h>
#include <math.h>

main()
{
	float vi, vf, cot;
	int  moeda;
	
	printf("Digite (1) para inserir um valor em Dolar, ou (2) para inserir um valor em Real: ");
	scanf("%d", &moeda);
	
	if (moeda==1) printf("\n\nDigite o valor em dolar: $");
	if (moeda==2) printf("\n\nDigite o valor em real: R$");
	scanf("%f", &vi);
	
	printf("\n\nInsira a cotacao do dolar: ");
	scanf("%f",&cot);
	
	if (moeda==1) vf=vi*cot;
	if (moeda==2) vf=vi/cot;
	
	if (moeda==1) printf("\n\nValor em real: R$%.2f", vf);
	if (moeda==2) printf("\n\nValor em dolar: $%.2f", vf);
}
