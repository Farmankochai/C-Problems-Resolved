#include<stdio.h>
void main ()
{
    int r;
    int s;
    int c;

    for ( r = 1; r <= 5; r++)
    {
        /* code */
        for(s=4; s>=r; s--)
        {
            printf("  ");
        }
        for(c=r; c>=1; c--)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    
}