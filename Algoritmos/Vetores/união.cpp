#include <stdio.h>

main()
{
    int a[10], b[10], c[20], i, ci=0, ai, verif;

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
    
    for(ci=0;ci<10;ci++)
        c[ci]=a[ci];

    for(i=0;i<10;i++)
    {
        verif=0;
        for(ai=0;ai<10;ai++)
            if(b[i]==a[ai])
                verif++;
        if(verif==0)
        {
            c[ci]=b[i];
            ci++;
        }
    }
    
    printf("\n\nA uniao entre A e B eh:\n");

    for(i=0;i<ci;i++)
        printf("\nC[%d] = %d\n", i+1, c[i]);
}