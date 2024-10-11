#include <stdio.h>
#include <math.h>

main()
{
	float a, b, c;
	printf("Insira o valor de A: ");
	scanf("%f", &a);
	printf("\nInsira o valor de B: ");
	scanf("%f", &b);
	printf("\nInsira o valor de C: ");
	scanf("%f", &c);
	
	if (a<b+c&&b<a+c&&c<a+b)
		{
		printf("\n\nE um triangulo ");
		if (a==b&&b==c)
			printf("equilatero");
		else
			if (a==b||b==c||c==a)
				printf("isoceles");
			else 
				printf("escaleno");
		}
	else
		printf("\n\nNao e um triangulo");
}
