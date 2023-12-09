// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

*********
 *     *
  *   *
   * *
    *

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= (8 - i); j++)
        {
            if (i > 0)
            {
                if ((j == i) || (j == (8 - i)))
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}