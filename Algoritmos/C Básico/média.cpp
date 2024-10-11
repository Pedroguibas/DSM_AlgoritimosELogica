#include <stdio.h>

main()
{
	int v1, v2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&v1);
	printf("\nDigite o segundo valor: ");
	scanf("%d",&v2);
	
	if (v1==v2)
		printf("\n\nOs valores sao iguais.");
	else
	{
		if(v1>v2)
			printf("\n\n%d e maior que %d",v1,v2);
		else
			printf("\n\n%d e maior que %d",v2,v1);
	}
}
