// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A

*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        int var = 'A';
        for (int j = 0; j <= 12; j++)
        {
            if ((j <= (6 - i)) || (j >= (6 + i)))
            {
                printf("%c", var);
                if (j < 6)
                    var++;
                else
                    var--;
            }
            else
            {
                printf(" ");
                if (j < 6)
                    var++;
                else
                    var--;
            }
        }
        printf("\n");
    }
    return 0;
}