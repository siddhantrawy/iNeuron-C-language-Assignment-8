/*  Write a program to draw the following pattern -
    1234321
    123 321
    12   21
    1     1
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0; i<=3; i++)
    {
        int count=1;
        for(j=0; j<=6; j++)
        {
            if(i==0 && j==4)
            {
                count=count-2;
                printf("%d",count);
            }
            else if(j>=0 && j<=3-i)
            {
                printf("%d",count++);
            }
            else if(j>=3+i && j<=6)
            {
                printf("%d",--count);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}