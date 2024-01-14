#include <stdio.h>
//  user numner;
// print
// 11111
// 22222
// 33333
// 44444
// 55555

int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d",i );
        }
        printf("\n");
    }
    return 0;
}
