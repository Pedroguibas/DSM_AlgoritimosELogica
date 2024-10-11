#include <stdio.h>

main()
{
	char s;
	
	printf("Determine seu sexo biologico [F ou M]: ");
	scanf("%c",&s);
	
	if (s=='M')
		printf("\n\nSexo masculino");
	
	else	
		if (s=='F')
			printf("\n\nSexo feminino");
		else
			printf("\n\nOutro genero");
}
