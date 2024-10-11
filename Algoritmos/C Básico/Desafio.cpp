#include <stdio.h>

main()
{
	int a, b, c, x;
	
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("\nInsira o valor de B: ");
	scanf("%d", &b);
	printf("\nInsira o valor de C: ");
	scanf("%d", &c);
	
	if (a>b||a>c)
		if (b<c)
			{
				x=a;
				a=b;
				b=x;
			}
		else
			{
				x=a;
				a=c;
				c=x;
			}
	else
		if (b>c)
		{
			x=b;
			b=c;
			c=x;
		}
	
	printf("\nA=%d B=%d e C=%d", a, b, c);
}
