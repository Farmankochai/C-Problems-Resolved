#include<stdio.h>
void main ()
{
    int x = 1;
    while(x <= 9)
    {
        if(x % 3 == 0)
        {
            printf("%d \t",x);
        }

        x++;
    }
}