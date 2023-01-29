#include <stdio.h>
main()
{
	int a[5][6]; 
    int satirToplam = 0;
    int kareToplam = 0;
    int* ptr = &a[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("sayi gir: \n");
            scanf("%d", (ptr + (i*6)+j));
            satirToplam = satirToplam + *(ptr + (i*6)+j);
            kareToplam = kareToplam + *(ptr + (i*6)+j) * *(ptr + (i*6)+j);
        }
        if(satirToplam > 0)
        {
            printf("%d\n",satirToplam);
        }
        else
        {
            printf("%d\n",kareToplam);
        }
        satirToplam = 0;
        kareToplam = 0;
    }
	
}