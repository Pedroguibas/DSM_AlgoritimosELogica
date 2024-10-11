#include <stdio.h>
#include <math.h>

main()
{
	float w, h, imc;
	
	printf("Insira seu peso em quilos: ");
	scanf("%f", &w);
	printf("\nInsira sua altura em metros: ");
	scanf("%f", &h);
	
	imc=w/pow(h, 2);
	
	printf("\n\nSeu IMC e: %.2f", imc);	
	printf("\nVoce esta com ");
	
	if (imc<18.5)
		printf("Peso Baixo!");
	else
		if (imc<25)
			printf("Peso Normal!");
		else
			if (imc<30)
				printf("Sobrepeso!");
			else
				if (imc<35)
					printf("Obesidade!");
				else
					if (imc<40)
						printf("Obesidade Severa!");
					else
						printf("Obesidade Morbida!");
	
}
