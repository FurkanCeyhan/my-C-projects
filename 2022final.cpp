#include <stdio.h>

// 2022 algo final

// 1. soru

/*
main()
{
	int i,j;
	for(i=5 ; i>=0 ; i--)
	{
	
		for(j=1;j<=i;j++)
		{	
			printf("*");
			if(j>=2) printf("a");
			if(j==2) printf("b");
		}
		printf("\n");
 	}
}

*/

// 2. soru

/*
main()
{
	int dizi[10] , i ,j;
	printf("dizinin son degerini giriniz: ");
	scanf("%d",&dizi[9]);
	for( i=8 ; i>=0 ; i--)
	{
		dizi[i]	= dizi[i+1]-2;
	}
	printf("\nDizinin Degerleri\n");
	for( j=0 ; j<10 ; j++)
	{
		printf("%d\n",dizi[j]);
	}	
}
*/

// 3. soru

main()
{
	int *ptra,*ptrb,*ptrc,a[50], b[50], c[50] ,i, sayacB = 0, sayacC = 0;
    ptra = &a[0];
    ptrb = &b[0];
    ptrc = &c[0];
    for(i=0 ; i<50 ; i++)
    {
        printf("sayi gir: ");
        scanf("%d", (ptra+i));
        if(*(ptra+i) > 0)
        {
            *(ptrb+sayacB)=*(ptra+i);
            sayacB++;
        }
        else if (*(ptra+i) < 0)
        {
            *(ptrc+sayacC)=*(ptra+i);
            sayacC++;
        }
    }

    printf("a dizisi: ");
    for(i=0 ; i<50 ; i++)
    {
        printf("%d ",*(ptra+i));
    }

    printf("\nb dizisi: ");
    for(i=0 ; i<sayacB ; i++)
    {
        printf("%d ",*(ptrb+i));
    }

    printf("\nc dizisi: ");
    for(i=0 ; i<sayacC ; i++)
    {
        printf("%d ",*(ptrc+i));
    }
}