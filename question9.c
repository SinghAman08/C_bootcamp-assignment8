// Date-> 12/8/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

1234321
 12321
  121
   1

*/

#include <stdio.h>
int main()
{
    for (int i = 3; i >= 0; i--)
    {
        int x = 1;
        for (int j = 0; j <= 3 + i; j++)
        {
            if (j >= (3 - i))
            {
                printf("%d", x);
                if (j < 3)
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