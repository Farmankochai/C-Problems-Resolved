#include<stdio.h>
void main ()
{
    int arr1 [3][3];
    int arr2 [3][3];
    int r;
    int c;
    int num;

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
             printf("Enter Values: ");
             scanf("%d",&num);
             arr1[r][c] = num;
        }
    }

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            arr2[r][c] = arr1 [r][c];
        }
         printf("\n");
    }

       printf("Copying 1st Array into 2nd Array:\n");

     for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("%d ",arr2[r][c]);
        }
        printf("\n");
    }

}