#include <stdio.h>

main()
{
	int n, numf;
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	printf("\n");
	
	for (numf=0;n>0;n--)
	{
		numf+=n;
		printf("%d", n);
		if (n>1)
			printf(" + ");
		else
			printf(" = ");
	}
	
	printf("%d", numf);
}
