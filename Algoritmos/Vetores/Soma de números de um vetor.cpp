#include <stdio.h>

main()
{
	int a[10], i, sum;
	
	for (i=0;i<10;i++)
	{
		printf("A[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	sum=a[0];
	for(i=1;i<10;i++)
		sum+=a[i];
	printf("\n\nSoma = %d", sum);
}
