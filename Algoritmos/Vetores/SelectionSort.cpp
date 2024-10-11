#include <stdio.h>

main()
{
    int a[10], i, j, t;
    for(i=0;i<10;i++)
    {
        printf("\nA[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++)
    {    
        int min=i;
        for(j=i+1;j<10;j++)
            if(a[j]<a[min])
                min=j;
		if(min!=i)
        {
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
    for(i=0;i<10;i++)
        printf("\nA[%d] = %d", i+1, a[i]);    
}