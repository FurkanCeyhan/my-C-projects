#include <stdio.h>
main()
{
    int i,j,k,bosluk;
    bosluk=5;
    for(i=0 ; i<6 ; i++)
    {
        for(k=0 ; k<bosluk ; k++)
        {
            printf(" ");
        }
        printf("a");
        for(j=0 ; j < 2*i-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
        bosluk--;
    }
}