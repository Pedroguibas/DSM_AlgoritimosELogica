#include <stdio.h>

main()
{
	int num, fat;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	printf("\n");
	
	for(fat=1;num>0;num--)
	{
		fat*=num;
		printf("%d", num);
		if (num>1)
			printf(" x ");
	}
	printf(" = %d", fat);
}
