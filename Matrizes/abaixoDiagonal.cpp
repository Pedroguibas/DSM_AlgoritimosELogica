#include <stdio.h>

main()
{
    int a[5][5], i, j;

    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            a[i][j]=0;

    for(i=1;i<5;i++)
        for(j=0;j<i;j++)
            a[i][j]=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}
