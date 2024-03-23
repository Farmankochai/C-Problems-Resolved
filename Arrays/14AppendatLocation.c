#include<stdio.h>
void main ()
{
    int arr[6];
    int i;
    int r;
    int num;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }

    printf("Append Value: ");
    scanf("%d",&num);

    printf("Enter Which Location: ");
    scanf("%d",&r);

    for ( i = 0; i > r; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[r] = num;
    
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

}   