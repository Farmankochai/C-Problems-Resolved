#include<stdio.h>
void main ()
{
    int arr[6];
    int i;
    int num;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr[i] = num;
    }
     //Appending Value
    
    printf("Append a Value: ");
    scanf("%d",&num);
    arr[i] = num;

    for ( i = 0; i < 6; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    
    }
    
    
}