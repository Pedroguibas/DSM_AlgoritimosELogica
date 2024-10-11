#include <stdio.h>

main()
{
	int a, b, c, va=0, vb=0, vc=0;
	
	while (va<3&&vb<3&&vc<3)
	{
		printf("\n\nInsira A: ");
		scanf("%d", &a);
		printf("\nInsira B: ");
		scanf("%d", &b);
		printf("\nInsria C: ");
		scanf("%d", &c);
	
		if (a==b&&b==c)
		{
			printf("\nEmpate");
			printf("\n\nPlacar:\nA: %d\nB: %d\nC: %d", va, vb, vc);
		}
		else
		{
			if (a!=b&&b==c)
			{
				printf("\nVitoria de A!");
				va++;
				printf("\n\nPlacar:\nA: %d\nB: %d\nC: %d", va, vb, vc);
			}
			else
			{
				if (b!=a&&a==c)
				{
					printf("\nVitoria de B!");
					vb++;
					printf("\n\nPlacar:\nA: %d\nB: %d\nC: %d", va, vb, vc);
				}
				else
				{
					printf("\nVitoria de C!");
					vc++;
					printf("\n\nPlacar:\nA: %d\nB: %d\nC: %d", va, vb, vc);
				}
			}
		}
	}
	if(va==3)
		printf("\n\nA Venceu!!");
	else
		if (vb==3)
			printf("\n\nB Venceu!!");
		else
			printf("\n\nC Venceu!!");
}
