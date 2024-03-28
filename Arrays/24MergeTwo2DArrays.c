#include<stdio.h>
void main ()
{
    int arr1 [3][3];
    int arr2 [3][3];
    int arr3 [3][3];
    int r;
    int c;
    int num;

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
             printf("Enter 1st Array Values: ");
             scanf("%d",&num);
             arr1[r][c] = num;
        }
    }

     for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
             printf("Enter 2nd Array Values: ");
             scanf("%d",&num);
             arr2[r][c] = num;
        }
    }

     for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            arr3[r][c] = arr1[r][c] + arr2[r][c];
        }
    }

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("%d ",arr3[r][c]) ;
        }
        printf("\n");
    }

}