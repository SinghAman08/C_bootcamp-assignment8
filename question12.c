// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

ABCDCBA
 ABCBA
  ABA
   A

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        char var = 'A';
        for (int j = 0; j <= (6 - i); j++)
        {
            if (j >= i)
            {
                printf("%c", var);
                if (j < 3)
                    var++;
                else
                    var--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}