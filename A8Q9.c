/*  Write a program to draw the following pattern -
    1234321
     12321
      121
       1     
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=3; i>=0; i--)
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