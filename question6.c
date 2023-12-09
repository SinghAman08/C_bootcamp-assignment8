// Date-> 12/8/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>
int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= (4 + i); j++)
        {
            if ((4 - i) <= j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}