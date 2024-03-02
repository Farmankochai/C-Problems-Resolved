#include<stdio.h>
void main ()
{
    int x = 1;
    int s = 0;
    while(x <= 10)
    {
        if (x %2 == 0)
        {
            s = s + x;
        }
        x++;
    }
     printf("sum is %d", s);
}