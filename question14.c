// Date-> 12/9/23 ,Author Name = Aman Singh

// Write a program to draw the following patterns.

/*


*
**
* *
*  *
*****


*/
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i < 4)
            {
                if ((j == 0) || (j == i))
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
