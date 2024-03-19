#include<stdio.h>
void main ()
{
    int arr [5];
    int i;
    int x= 10;
    for ( i = 0; i < 5; i++)
    {
        /* code */
        arr [i] = x;
        x = x - 2;
    }

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%d \n",arr[i]);
    }
    
    
}