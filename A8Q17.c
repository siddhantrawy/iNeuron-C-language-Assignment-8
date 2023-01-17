/*  Write a program to draw the following pattern -
    *********
     *     *
      *   *
       * *
        *
*/


#include<stdio.h>

int main()
{
    int i, j;
    for(i=4; i>=0; i--)
    {
        for(j=0; j<9; j++)
        {
            if(i==4 || j==4-i || j==4+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}