#include<stdio.h>
void main ()
{
    int arr [5];
    int i;
    int num;
    int sum = 0;
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("enter Value: ");
        scanf("%d",&num);
        arr [i] = num;
    }
    for ( i = 0; i < 5; i++)
    {
        /* code */
        sum = sum + arr[i];
    }
    printf("%d ",sum);
    
    
}