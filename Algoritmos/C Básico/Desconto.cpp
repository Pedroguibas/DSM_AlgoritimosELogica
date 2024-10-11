#include <stdio.h>

main()
{
	float vi, vf, vd, d;
	
	printf("Calculador de desconto");
	printf("\nInsira o total da sua compra: R$");
	scanf("%f", &vi);
	
	if (vi>=500)
		d=0.2;
	else
		if (vi>=200)
			d=0.15;
		else
			d=0.1;
	
	vd=vi*d;
	vf=vi-vd;
	
	printf("\n\nO total da compra foi de R$%.2f", vi);
	printf("\nO valor a ser descontatdo e de R$%.2f", vd);
	printf("\nO total a pagar e de R$%.2f", vf);
	
}
