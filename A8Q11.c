/*  Write a program to draw the following pattern -
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=4; i>=0; i--)
    {
        char c='A';
        for(j=0; j<=9; j++)
        {
            if(j>=i && j<4)
            {
                printf("%c",c++);
            }
            else if(j>=4 && j<=8-i)
            {
                printf("%c",c--);
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