#include<stdio.h>
void main ()
{
    int arr [5];
    int i;
    int num;
    int mul = 1;
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter Values: ");
        scanf("%d",&num);
        arr [i] = num;
    }
    for ( i = 0; i < 5; i++)
    {
        /* code */
        mul = mul * arr[i];
    }
    printf("%d ",mul);
    
    
}