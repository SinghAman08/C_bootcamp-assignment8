// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        char x = 'A';
        for (int j = 0; j <= (4 + i); j++)
        {
            if (j >= (4 - i))
            {
                printf("%c", x);
                if (j < 4)
                    x++;
                else
                    x--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}