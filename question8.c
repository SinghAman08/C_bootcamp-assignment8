// Date-> 12/8/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

   1
  121
 12321
1234321

*/
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 3; i++)
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