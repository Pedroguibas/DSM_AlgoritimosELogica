#include <stdio.h>

main()
{
	int a[10], i, num, e=0;
	for(i=0;i<10;i++)
	{
		printf("\nA[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n\nDigite o numero para buscar: ");
	scanf("%d", &num);
	for (i=0;i<10;i++)
		if (a[i]==num)
		{	
			e++;
			break;
		}
			
	if (e)
		printf("\n\nO numero %d existe em A.", num);
	else
		printf("\n\nO numero %d nao existe em A.", num);
}
