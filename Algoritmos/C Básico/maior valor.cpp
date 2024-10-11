#include <stdio.h>

main()
{
	int x, y, z;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &x);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &y);
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &z);
	
	if ((x>y) && (x>z))
		printf("\n\nO maior valor e %d", x);
	else
		if(y>z)
			printf("\n\nO maior valor e %d", y);
		else
			printf("\n\nO maior valor e %d", z);
}
