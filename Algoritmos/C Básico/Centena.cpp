#include <stdio.h>

main()
{
	int num, c, d, u;
	
	printf("Digite um numero entre 0 e 999: ");
	scanf("%d", &num);
	
	c=num/100;
	d=(num-c*100)/10;
	u=num-c*100-d*10;
	
	printf("\n%d centenas", c);
	printf("\n%d dezenas", d);
	printf("\n%d unidades", u);
}
