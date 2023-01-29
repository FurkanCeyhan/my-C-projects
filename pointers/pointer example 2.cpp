#include <stdio.h>
int main()
{
    int dizi[10], *ptr, k, i, j;
    ptr=&dizi[9];
    printf("son degeri giriniz: ");
    scanf("%d", ptr);
    if(*ptr == 0)
    {
        printf("yanlis giris");
    }
    else if (*ptr>0)
    {
        for (i = 1; i < 10 ; i++)
        {
            *(ptr-i) = *(ptr-i+1)+2;
        }
    }
    else
    {
        for (j = 1; j <10 ; j++)
        {
            *(ptr-j) = *(ptr-j+1)-2;
        }
    }
    for (k = 9; k >=0 ; k--)
    {
        printf("\n%d",*(ptr-k));
    }
}