#include <stdio.h>

main()
{
	int cont, n, soma=0;
	
	for(cont=1;cont<=10;cont++)
	{
		printf("\nInsira um numero para adicionar a soma: ");
		scanf("%d", &n);
		soma+=n;
	}
	printf("\n\n%d", soma);
}
