#include <stdio.h>

main()
{
	int a[10], b[10], c[10], i;
	for (i=0;i<10;i++)
	{
		printf("\nA[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i=0;i<10;i++)
	{
		printf("\nB[%d] = ", i+1);
		scanf("%d", &b[i]);
	}
	for (i=0;i<10;i++)
		c[i]=a[i]+b[i];
	for (i=0;i<10;i++)
		printf("\nC[%d] = %d", i+1, c[i]);
	
}
