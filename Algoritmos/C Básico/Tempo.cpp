#include <stdio.h>

main()
{
	int t, s, m, h;
	
	printf("Insira a quantidade de segundos: ");
	scanf("%d", &t);
	
	h=t/3600;
	m=(t%3600)/60;
	s=t%60;
	
	printf("\n\n%d horas, %d minutos e %d segundos.", h, m, s);
	
}
