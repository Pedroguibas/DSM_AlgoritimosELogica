#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a[4][6], t[6][4], i, j;
	
	srand(time(NULL));
	printf("\nValores da matriz A (4x6):\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			a[i][j] = rand()%100;
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
			
	
	
	for(i=0;i<6;i++)
		for(j=0;j<4;j++)
			t[i][j]=a[j][i];
			
	printf("\n\nA matriz transposta eh:\n");
	for(i=0;i<6;i++)
		{
			for(j=0;j<4;j++)
				printf("%3d", t[i][j]);
			printf("\n");
		}
}
