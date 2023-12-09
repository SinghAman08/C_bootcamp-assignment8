// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*


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

#include <stdio.h>
int main()
{
    printf("\n\n");
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j <= 18; j++)
        {
            if (((j >= i) && (j < (9 - i))) || ((j > (9 + i)) && (j <= (18 - i))))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        
    }
    for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= (18 - i); j++)
            {
                if (j >= i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    printf("\n");
    return 0;
}