#include <stdio.h>

main()
{
    int a[10], i, j, t;
    for(i=0;i<10;i++)
    {
        printf("\nA[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    for(j=1;j<10;j++)
    	for(i=0;i<10-j;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    for(i=0;i<10;i++)
        printf("\nA[%d] = %d", i+1, a[i]);
}
