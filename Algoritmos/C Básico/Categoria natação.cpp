#include <stdio.h>

main()
{
	int i;
	
	printf("Insira a idade do nadador: ");
	scanf("%d", &i);
	
	if (i<=8)
		printf("\n\nCategoria Infantil A");
	else
		if (i<13)
			printf("\n\nCategoria Infantil B");
		else 
			if (i<18)
				printf("\n\nCategoria Juvenil A");
			else
				if (i<21)
					printf("\n\nCategoria Juvenil B");
				else 
					printf("\n\nCategoria Senior");
}
