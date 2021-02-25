#include<stdio.h>

void main()
{
    int i,j,temp;

    int a[10] = {10,2,3,23,44,55,67,89,12,45};

    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }

    printf("Sorted Array :");

    for ( i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    
    
}