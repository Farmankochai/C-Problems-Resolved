#include<stdio.h>
void main()
{
    int arr[6];
    int i;
    int r;
    int num;

    for ( i = 0; i < 6; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }

    printf("Delete a Location: ");
    scanf("%d",&r);

    for ( i = r; i < 6; i++)
    {
        arr[i] = arr[i+1];
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}