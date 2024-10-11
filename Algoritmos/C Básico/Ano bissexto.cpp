#include <stdio.h>

main()
{
	int a;
	
	printf("Insira um ano: ");
	scanf("%d", &a);
	
	if ((a%400==0)||(a%4==0&&a%100>0))
		printf("\n\nO ano de %d eh bissexto!", a);
	else
		printf("\n\nO ano de %d nao eh bissexto!", a);
	
}
