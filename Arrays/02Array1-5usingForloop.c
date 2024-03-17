#include<stdio.h>
void main ()
{
    int arr [5];
    int i;
    int num;

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("enter value :");
        scanf("%d",&num);
        arr [i] = num;
    }

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%d \n",arr [i]);
    }
    
    
}