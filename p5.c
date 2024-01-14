#include <stdio.h>
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777
// 88888888
// 999999999
// 10101010101010101010
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}