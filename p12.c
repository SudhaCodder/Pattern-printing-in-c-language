#include <stdio.h>

// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789
// 12345678910

int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j );
        }
        printf("\n");
    }
    return 0;
}