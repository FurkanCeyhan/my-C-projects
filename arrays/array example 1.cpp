#include <stdio.h>
int main()
{
    int dizi[10], i, j; //
    printf("son degeri giriniz: ");
    scanf("%d",&dizi[9]);
    if(dizi[9] == 0)
    {
        printf("yanlis giris");
    }
    else if(dizi[9]>0)
    {
        for(i=8 ; i>=0 ; i--)
        {
            dizi[i] = dizi[i+1]+2;
        }
    }
    else
    {
        for (int k = 8; k >= 0 ; k--)
        {
            dizi[k] = dizi[k+1]-2;
        }
    }
    for (j = 0; j < 10; j++)
    {
        printf("\n%d", dizi[j]);
    }
}