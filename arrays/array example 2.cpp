#include <stdio.h>
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