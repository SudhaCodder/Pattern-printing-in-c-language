#include <stdio.h>

// 12345678910
// 123456789
// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1

int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}