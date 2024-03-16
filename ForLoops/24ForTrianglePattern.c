#include<stdio.h>
void main ()
{
    int r;
    int c;
    int s;

    for (r=1; r<=5; r++)
    {
        for(s=r; s<5; s++)
        {
            printf("  ");
        }
        for(c=1; c<=r; c++)
        {
            printf("%d ",c);
        }
        for(c=1; c< r; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
}