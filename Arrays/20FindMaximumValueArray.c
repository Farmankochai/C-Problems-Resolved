#include<stdio.h>
void main ()
{
    int arr[5];
    int i;
    int max;
    int num;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }
    max = arr[0];

    for ( i = 0; i < 5; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
    }

    printf("Minimum Value is: %d",max);
    
}