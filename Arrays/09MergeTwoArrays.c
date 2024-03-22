#include<stdio.h>
void main ()
{
    int arr1 [5];
    int arr2 [5];
    int arr3 [5];
    int i;
    int num;

    printf("Enter Arrays: \n");

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter First Array: ");
        scanf("%d",&num);
        arr1[i] = num;
    }
    
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Second Array: ");
        scanf("%d",&num);
        arr2[i] = num;
    }

    for ( i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr3[i]);
    }
}