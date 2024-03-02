#include<stdio.h>

void main ()
{
    int x = 2;
    int s = 0;
    
     while (x <= 10)
     {
        s = s + x;
        x = x + 2;
     }

     printf("the result is %d", s,x);
}