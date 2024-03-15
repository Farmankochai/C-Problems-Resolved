#include<stdio.h>
void main ()
{
    int r;
    int c;

    for(r=5; r>=1; r--)
    {
        for ( c = 5; c >= r; c--)
        {
            /* code */
            printf("%d \t",c);
        }
        printf("\n");
        
    }
}