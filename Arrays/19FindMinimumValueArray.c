#include<stdio.h>
void main ()
{
    int arr[5];
    int i;
    int min;
    int num;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }
    min = arr[0];

    for ( i = 0; i < 5; i++)
    {
        /* code */
        if (arr[i] < min)
        {
            /* code */
            min = arr[i];
        }
    }

    printf("Minimum Value is: %d",min);
    
}