#include <stdio.h>

main()
{
	int a[10], b[10], result=0, i;
	
	for (i=0;i<10;i++)
	{
		printf("\nA[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n\n");
	for (i=0;i<10;i++)
	{
		printf("\nB[%d]", i+1);
		scanf("%d", &b[i]);
	}
	for (i=0;i<10;i++)
		result+=a[i]*b[i];
	printf("\n\nO produto escalar de A e B eh %d", result);
}
