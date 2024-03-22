#include<stdio.h>
void main ()
{
    int arr1[5];
    int arr2[5];
    int mul = 1;
    int i;
    int num;
    

    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter 1st Value: ");
        scanf("%d",&num);
        arr1[i] = num;
    }
    
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter 2st Value: ");
        scanf("%d",&num);
        arr2[i] = num;
    }

    for ( i = 0; i < 5; i++)
    {
        mul = mul * arr1[i] * arr2[i];
    }
  printf("Multiply of Two Arrays is %d ",mul);
    
    

}