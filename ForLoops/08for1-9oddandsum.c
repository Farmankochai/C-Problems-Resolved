#include<stdio.h>
void main ()
{
    int i;
    int s = 0;
    for ( i = 1; i <= 9; i = i + 2)
    {
        /* code */
        s = s + i;
    }
    printf("Sum is %d", s);
    
}