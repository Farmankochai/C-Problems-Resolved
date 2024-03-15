#include<stdio.h>
void main ()
{
    int r;
    int c;

    for(r=1; r<=5; r++)
    {
        for(c=5; c>=r; c--){
            printf("%d \t",c);
        }
        printf("\n");
    }
}