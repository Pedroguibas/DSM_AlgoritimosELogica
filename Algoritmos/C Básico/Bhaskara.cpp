#include <stdio.h>
#include <math.h>

main()
{
	int a, b, c, delta;
	float x1, x2;	
	
	printf("Bhaskara");
	
	printf("\n\nDigite o valor de a: ");
	scanf("%d", &a);
	
	printf("\nDigite o valor de b ");
	scanf("%d", &b);
	
	printf("\nDigite o valor de c: ");
	scanf("%d", &c);
	
	delta=pow(b, 2)-4*a*c;
	printf("\n\nDelta = %d", delta);
	
	
	if 
		(delta<0) printf("\nNumero irreal");
	else 
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\n\nx1 = %.3f \nx2 = %.3f", x1, x2);
}
