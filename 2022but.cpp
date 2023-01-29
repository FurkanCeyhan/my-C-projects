#include <stdio.h>

// 2022 büt soruları

// 1. soru

/*

main()
{
	int i, j;
	for (i=1 ; i<6 ; i++)
	{	
		printf("a");
		for(j=6 ; j>i ; j-- )
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
}

*/

// 2. soru

/*

main()
{
	int i,j;
	for (i=1 ; i<=5 ; i++)
	{
		for (j=1 ; j<=4 ; j++)
		 printf("%3d", i*j+1);
		printf("\n");
		
	}
}

*/

// 3. soru

/*
main()
{
	int a[5][6];
    int satirToplam = 0;
    int kareToplam = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("sayi gir: \n");
            scanf("%d", &a[i][j]);
            satirToplam = satirToplam + a[i][j];
            kareToplam = kareToplam + a[i][j] * a[i][j];
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


*/


// 4. soru

/*
main()
{
	int a[5][6]; // 
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

*/












