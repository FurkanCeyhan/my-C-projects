#include <stdio.h>
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