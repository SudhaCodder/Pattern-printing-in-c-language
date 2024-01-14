#include <stdio.h>
// * * * * * * * * * *
// * * * * * * * * *
// * * * * * * * *
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// or,

#include <stdio.h>
int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("* ");
        }
        printf("\n");
        a--;
    }
    return 0;
}


