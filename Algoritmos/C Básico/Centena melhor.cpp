#include <stdio.h>

main()
{
	int num, c, d, u;
	
	printf("Digite um numero de 0 a 999: ");
	scanf("%d",&num);
	
	c=num/100;
	d=(num%100)/10;
	u=num%10;
	
	printf("\n\n%d centenas", c);
	printf("\n%d dezenas", d);
	printf("\n%d unidades", u);
	
}
