#include<stdio.h>
void main ()
{
    int i;
    int sum = 0;
    for ( i = 1; i <= 9; i = i + 2)
    {
        /* code */
        sum = sum + i;
    }
    printf("%d \n",sum);
    
}