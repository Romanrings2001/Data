#include<stdio.h>

void main()
{
    int i,j,k,temp;

    int a[10] = {1,2,3,13,44,55,67,89,12,45};

    printf("Sorted Array :");

    for ( k = 1; k < 10; k++)
    {
        temp = a[k];
        for(j= k-1 ;temp <= a[j];j--)
            a[j+1]= temp;   
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%3d",a[i]);
    }
    
}