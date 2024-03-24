#include<stdio.h>
void main ()
{
    int arr[6];
    int i;
    int num;

    for ( i = 0; i < 6; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }

    for ( i = 0; i < 5; i++)
    {
        /* code */
        arr[i] = arr[i+1];
    }

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    
}