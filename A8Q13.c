/*  Write a program to draw the following pattern -
    ABCDEFGFEDCBA
    ABCDEF FEDCBA
    ABCDE   EDCBA
    ABCD     DCBA
    ABC       CBA
    AB         BA
    A           A
*/

#include<stdio.h>

int main()
{
    int i, j;
    for(i=0; i<=6; i++)
    {
        char c='@';
        for(j=0; j<=12; j++)
        {
            if(j<6-i)
            {
                printf("%c",++c);
            }
            else if(i==0 && j==6)
            {
                printf("%c",'G');
            }
            else if(j>6+i)
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