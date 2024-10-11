#include <stdio.h>
#include <stdlib.h>

main()
{
	int A, B, T;
	
	printf("Determine o valor positivo de A: ");
	scanf("%d", &A);
	if (A<0) abort();
	
	printf("\nDetermine o valor positivo de B: ");
	scanf("%d", &B);
	if (B<0) abort();
	
	T=A;
	A=B;
	B=T;
	
	printf("\n\nInversao");
	printf("\nValor de A agora e: %d", A);
	printf("\nValor de B agora e: %d", B);
}
