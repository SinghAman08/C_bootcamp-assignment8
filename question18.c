// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

    *
   ***
  *****
 *******
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
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= (4 + i); j++)
        {
            if (j >= (4 - i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= (7 - i); j++)
        {
            if (j > i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}