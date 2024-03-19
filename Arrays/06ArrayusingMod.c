#include<stdio.h>
void main ()
{
    int arr [5];
    int i;
    int num;

    for ( i = 0; i < 5;)
    {
        /* code */
        printf("Enter Value: ");
        if (i % 2 == 0)
        {
           scanf("%d",&num);
        }
        arr [i] = num;
        i++;
        
    }
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%d \n",arr[i]);
    }
    
}