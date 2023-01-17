/*  Write a program to draw the following pattern -
        1
       121
      12321
     1234321
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0; i<=3; i++)
    {
        int count=1;
        for(j=0; j<=3+i; j++)
        {
            if(j>=3-i)
            {
                printf("%d",count);
                if(j<3)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }  
            else
                printf(" ");
        }
        printf("\n");
    }
}