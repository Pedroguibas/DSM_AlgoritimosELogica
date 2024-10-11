#include <stdio.h>

main()
{
	int a[20], i, cont=1;
	for (i=0;i<20;cont++)
	{
		if (cont%2!=0)
		{
			a[i]=cont;
			printf("\n%d\n", a[i]);
			i++;
		}
	}
}
