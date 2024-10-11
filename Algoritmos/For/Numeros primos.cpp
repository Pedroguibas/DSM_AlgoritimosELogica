#include <stdio.h>

main()
{
	int cont, ndiv=2, num;
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	for(cont=2;cont<=(num/2);cont++)
	{
		if (num%cont==0)
		{
			printf("\n\nO numero %d nao eh primo!", num);
			ndiv++;
			break;
		}	
	}
	if(ndiv==2)
		printf("\n\nO numero %d eh primo!!", num);
}
