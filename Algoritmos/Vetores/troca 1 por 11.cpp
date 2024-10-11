#include <stdio.h>

main()
{
	int a[20], i, mov;
	
	for(i=0;i<20;i++)
	{
		printf("A[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		mov=a[i];
		a[i]=a[i+10];
		a[i+10]=mov;
	}
	printf("\n\nO novo vetor eh:\n");
	for(i=0;i<20;i++)
		printf("\nA[%d] = %d", i+1, a[i]);
}
