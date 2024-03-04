#include<stdio.h>
void main()
{
    int x = 1;
    int s = 0;

    while (x <= 10)
    {
        /* code */
        if (x % 3 == 0)
        {
           s = s + x;
        }
        x++;
        
    }

    printf("%d \n",s);
    
}