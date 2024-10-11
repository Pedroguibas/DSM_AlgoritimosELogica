#include <stdio.h>
#include <stdlib.h>

main()
{
	int num, succ;
	
	printf("Digite um numero de 0 a 60: ");
	scanf("%d", &num);
	succ=(num+1)/61;
	
	printf("\n\nO sucessor do numero e: %d", succ);	
}
