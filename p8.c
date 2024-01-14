#include <stdio.h>
// print n se n line number tak
// user n;
// 12345
// 12345
// 12345
// 12345
// 12345
int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}