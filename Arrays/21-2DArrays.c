#include<stdio.h>
void main ()
{
    int arr[3][3];
    int r;
    int c;
    int num;

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
             printf("Enter Values: ");
             scanf("%d",&num);
             arr[r][c] = num;
        }
    }

   for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
             printf("%d ",arr[r][c]);
            
        }
        printf("\n");
    }
}