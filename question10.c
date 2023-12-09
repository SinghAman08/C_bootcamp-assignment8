// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

1234321
123 321
12   21
1     1

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 3; i++)
    {
        int x = 1;
        for (int j = 0; j <= 6; j++)
        {
            if (j <= (3 - i) || j >= (3 + i))
            {
                printf("%d", x);
                if (j < 3)
                    x++;
                else
                    x--;
            }
            else
            {
                printf(" ");
                if (j < 3)
                    x++;
                else
                    x--;
            }
        }
        printf("\n");
    }
    return 0;
}