/*  Write a program to draw the following pattern -
    ABCDCBA
     ABCBA
      ABA
       A
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0; i<=3; i++)
    {
        char c='A';
        for(j=0; j<=6; j++)
        {
            if(j>=i && j<3)
            {
                printf("%c",c++);
            }
            else if(j>=3 && j<=6-i)
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