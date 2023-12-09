// Date-> 12/8/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

*****
 ****
  ***
   **
    *

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i <= j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}