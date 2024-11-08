#include <stdio.h>

main()
{
    int a[5][5], i, j;

    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            if (i==j || j==4-i)
                a[i][j] = 1;
            else
                a[i][j] = 0;

    printf("\n A matrix X eh:\n\n");

    for (i=0; i<5; i++) {
        for(j=0; j<5; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}
