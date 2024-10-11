#include <stdio.h>

main()
{
	char S;
	float h, w;
	
	printf("Insira seu sexo biologico [M ou F]: " );
	scanf("%c", &S);
	printf("\nInsira sua altura (em metros): ");
	scanf("%f", &h);
	
	if (S=='M'||S=='m')
		w=(72.7*h)-58;
	if (S=='F'||S=='f')
		w=(62.1*h)-44.7;
	
	printf("\n\nSeu peso ideal e: %.3fKg", w);
}
