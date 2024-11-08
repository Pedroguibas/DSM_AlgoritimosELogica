#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int ano[12][4], totalMes[12] = {0,0,0,0,0,0,0,0,0,0,0,0}, totalAno = 0, valorMaiorSemana = 0, mesMaiorSemana, maiorSemana, i, j;

    srand(time(NULL));

    for (j=0; j<12; j++) {
    	
        for (i=0; i<4; i++) {
            ano[i][j] = 100+rand()%900;
            totalMes[j] += ano[i][j];
            if (ano[i][j] > valorMaiorSemana) {
                valorMaiorSemana = ano[i][j];
                mesMaiorSemana = j;
                maiorSemana = i;
            }
        }
        totalAno += totalMes[j];
    }
    
    printf("\n Tabela de Producao\n\n");
    for (i=0; i<4; i++) {
        for (j=0; j<12; j++)
            printf("%5d", ano[i][j]);

        printf("\n");
    }

    printf("\n\nTotal de cada mes:");
    for (i=0; i<12; i++)
        printf("\nO total do mes %d foi de: %d", i+1, totalMes[i]);

    printf("\n\nA semana que mais produziu foi a semana %d do mes %d com uma producao de %d", maiorSemana+1, mesMaiorSemana+1, valorMaiorSemana);

    printf("\n\nA producao total do ano foi de: %d", totalAno);
}
