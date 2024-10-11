#include <stdio.h>

main()
{
	int tab, num=1, r;
	
	printf("Digite a tabuada desejada: ");
	scanf("%d", &tab);
	
	while (num<=10)
	{
		r=tab*num;
		printf("\n%d x %d = %d", tab, num, r);
		num++;
	}
}
