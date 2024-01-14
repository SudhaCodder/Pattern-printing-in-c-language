#include <stdio.h>

int main()
{

    for (char i = 'A'; i <= 'H'; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}