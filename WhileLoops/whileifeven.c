#include<stdio.h>
void main()
{
    int x = 1;
    while(x <= 10)
    {
        if (x %2 == 0)
        {
            printf("%d \n",x);
        }
       x++; 
    }
}