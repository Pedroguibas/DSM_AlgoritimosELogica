#include <stdio.h>

main()
{
	int a[20], par[20], imp[20], i, cp=0, ci=0;
	for(i=0;i<20;i++)
	{
		printf("A[%d] = ", i+1);
		scanf("%d", &a[i]);
		
		if (a[i]%2==0)
		{
			par[cp]=a[i];
			cp++;
		}
		else
		{
			imp[ci]=a[i];
			ci++;
		}
	}
	
	printf("\n\nOs pares sao: ");
	for(i=0;i<cp;i++)
		printf("\nPar[%d] = %d", i+1, par[i]);
		
	printf("\n\nOs impares sao: ");
	
	for(i=0;i<ci;i++)
		printf("\nPar[%d] = %d", i+1, imp[i]);
}
