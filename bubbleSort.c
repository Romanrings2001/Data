#include<stdio.h>

int smallest(int[],int,int);

void main()
{
    int a[10] = {1,2,3,23,44,55,67,89,12,45};
    int i,j,k,pos,temp;

    for ( i = 0; i < 10; i++)
    {
        pos = smallest(a,10,i);
        temp = a[i];
        a[i]= a[pos];
        a[pos]=temp;
    }
    printf("Sorted Array :");
    for ( i = 0; i < 10; i++)
    {
        printf("%3d",a[i]);
    }
    
    
}

int smallest(int a[],int n, int i)
{
    int small,pos,j;
    small = a[i];
    pos=i;

    for ( j = i+1; j < 10; j++)
    {
        if (a[j]<small)
        {
            small = a[j];
            pos = j;
        }
        
    }
    return pos;
}