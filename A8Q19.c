/*  Write a program to draw the following pattern -
      *****     *****
     *******   *******
    ********* *********
    *******************
     *****************
      ***************
       *************
        ***********
         *********
          *******
           *****
            ***
             *
*/

#include<stdio.h>

int main()
{
      int i, j;
      for(i=2; i>=0; i--)
      {
            for(j=0; j<19; j++)
            {
                  if(j>=i && j<9-i || (j>9+i && j<19-i))
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

      for(i=9; i>=0; i--)
      {
        for(j=0; j<=18; j++)
        {
            if(j<9-i || j>9+i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
      }
}