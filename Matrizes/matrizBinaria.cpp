#include <stdio.h>

main()
{
    int a[8][8], i, j;

    for (i=0; i<8; i++)
        for (j=0; j<8; j++)
            a[i][j] = (i+j)%2;

    for (i=0; i<8; i++) {
        for (j=0; j<8; j++)    
            printf("%3d", a[i][j]);
        printf("\n");
    }
}