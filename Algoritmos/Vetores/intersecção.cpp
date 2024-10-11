#include <stdio.h>

main()
{
    int a[10], b[10], c[10], i, ci=0, bi;

    printf("Insira os valores de A:\n");

    for(i=0;i<10;i++)
    {
        printf("\nA[%d] = ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n\nInsira os valores de B:\n");

    for(i=0;i<10;i++)
    {
        printf("\nB[%d] = ", i+1);
        scanf("%d", &b[i]);
    }

    for(i=0;i<10;i++)
        for(bi=0;bi<10;bi++)
            if(a[i]==b[bi])
            {
                c[ci]=a[i];
                ci++;
            }
    
    printf("\n\nA interseccao entre A e B eh:\n");

    for(i=0;i<ci;i++)
        printf("\nC[%d] = %d\n", i+1, c[i]);
}