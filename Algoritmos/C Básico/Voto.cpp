#include <stdio.h>

main()
{
	int i;
	
	printf("Insira sua idade: ");
	scanf("%d", &i);
	
	if (i<16)
		printf("\n\nVotar e PROIBIDO");
	else
		if (i<18||i>=65)
			printf("\n\nVotar e FACULTATIVO");
		else
			printf("\n\nVotar e OBRIGATORIO");	
}
